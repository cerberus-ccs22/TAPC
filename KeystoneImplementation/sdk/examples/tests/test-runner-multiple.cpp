//******************************************************************************
// Copyright (c) 2018, The Regents of the University of California (Regents).
// All Rights Reserved. See LICENSE for license details.
//------------------------------------------------------------------------------
#include <getopt.h>
#include <cstdio>
#include <iostream>
#include "host/keystone.h"

int
main(int argc, char** argv) {
  if (argc < 3 || argc > 8) {
    printf(
        "Usage: %s <eapp> <runtime> [--utm-size SIZE(K)] [--freemem-size "
        "SIZE(K)] [--time] [--load-only] [--utm-ptr 0xPTR] [--retval EXPECTED]\n",
        argv[0]);
    return 0;
  }

  int self_timing = 0;
  int load_only   = 0;

  size_t untrusted_size = 2 * 1024 * 1024;
  size_t freemem_size   = 48 * 1024 * 1024;
  uintptr_t utm_ptr     = (uintptr_t)DEFAULT_UNTRUSTED_PTR;
  bool retval_exist = false;
  unsigned long retval = 0;

  static struct option long_options[] = {
      {"utm-size", required_argument, 0, 'u'},
      {"utm-ptr", required_argument, 0, 'p'},
      {"freemem-size", required_argument, 0, 'f'},
      {"retval", required_argument, 0, 'r'},
      {0, 0, 0, 0}};

  char* eapp_file = argv[1];
  char* rt_file   = argv[2];

  int c;
  int opt_index = 3;
  while (1) {
    c = getopt_long(argc, argv, "u:p:f:", long_options, &opt_index);

    if (c == -1) break;

    switch (c) {
      case 0:
        break;
      case 'u':
        untrusted_size = atoi(optarg) * 1024;
        break;
      case 'p':
        utm_ptr = strtoll(optarg, NULL, 16);
        break;
      case 'f':
        freemem_size = atoi(optarg) * 1024;
        break;
      case 'r':
        retval_exist = true;
        retval = atoi(optarg);
        break;
    }
  }

  Keystone::Enclave enclave1;
  Keystone::Enclave enclave2;
  Keystone::Params params;

  params.setFreeMemSize(freemem_size);
  params.setUntrustedMem(utm_ptr, untrusted_size);

  enclave1.init(eapp_file, rt_file, params);
  enclave2.init(eapp_file, rt_file, params);

  uintptr_t encl1_ret;
  uintptr_t encl2_ret;
  enclave1.run(&encl1_ret);
  enclave2.run(&encl2_ret);

  if (retval_exist && (encl1_ret != retval || encl2_ret != retval)) {
    printf("[FAIL] enclave returned a wrong value (%d != %d || %d != %d)\r\n", encl1_ret, retval, encl2_ret, retval);
  }

  return 0;
}
