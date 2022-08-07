//******************************************************************************
// Copyright (c) 2018, The Regents of the University of California (Regents).
// All Rights Reserved. See LICENSE for license details.
//------------------------------------------------------------------------------
#define IO_SYSCALL_WRAPPING
#include "edge/edge_call.h"
#include "host/keystone.h"
#include "sys/wait.h"
#include <unistd.h>

using namespace Keystone;

int
main(int argc, char** argv) {
  Enclave enclave;
  Params params;

  params.setFreeMemSize(64 * 1024 * 1024); // 50 MB
  params.setUntrustedMem(DEFAULT_UNTRUSTED_PTR, 2 * 1024 * 1024);

  enclave.init(argv[1], argv[2], params);

  enclave.registerOcallDispatch(incoming_call_dispatch);

  edge_call_init_internals(
      (uintptr_t)enclave.getSharedBuffer(),(size_t)enclave.getSharedBufferSize());

  uintptr_t encl_ret;
  Error ret = enclave.run(&encl_ret);

  if (ret != Error::EnclaveSnapshot) {
    printf("Enclave failed to create snapshot\n");
    printf("Error: %d\n", ret);
    return 1;
  }

  Enclave* pEnclave = &enclave;

  Enclave* parent = nullptr;

  int i = 1;

  for(i=0; i<10; i++)
  {

      int pid = fork();
      if (!pid) {
        Enclave* child;
        if (!parent) {
          child = pEnclave->clone(100,0);
        } else {
          child = parent->clone(100, 0);
        }
        child->registerOcallDispatch(incoming_call_dispatch);
        edge_call_init_internals(
            (uintptr_t)child->getSharedBuffer(),(size_t)child->getSharedBufferSize());

        /* resume child from where the snapshot is taken */
        ret = child->resume();
        assert(ret == Error::Success);
        return 0;
      }

      int status;
      wait(&status);

      if (!parent) {
        parent = pEnclave->clone(100, 1);
        parent->registerOcallDispatch(incoming_call_dispatch);
      }
      edge_call_init_internals(
          (uintptr_t)parent->getSharedBuffer(), (size_t)parent->getSharedBufferSize());

      /* resume parent; parent should keep calling clone() */
      ret = parent->resume();
      assert(ret == Error::EnclaveSnapshot);
  }

  return 0;
}
