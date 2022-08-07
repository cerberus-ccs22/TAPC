#!/bin/bash

SSH_OPTIONS="-i /home/ubuntu/keystone/sdk/overlay/root/.ssh/id_rsa"
SSH_OPTIONS+=" -o StrictHostKeyChecking=no"
SSH_OPTIONS+=" -o UserKnownHostsFile=/dev/null"

upload_to_qemu() {
    echo "Uploading \"$(basename $1)\" to QEMU ..."
    scp ${SSH_OPTIONS} -P 5325 $1 root@localhost:.
}

run_in_qemu() {
    echo "Running \"$1\" in QEMU ..."
    ssh ${SSH_OPTIONS} -p 5325 root@localhost "$1"
}

run_in_qemu "insmod keystone-driver.ko"

upload_to_qemu "/home/ubuntu/keystone/sdk/examples/tests/tests.ke"
run_in_qemu "./tests.ke"

upload_to_qemu "/home/ubuntu/keystone/sdk/examples/attestation/attestor.ke"
upload_to_qemu "/home/ubuntu/keystone/sdk/sm.build/platform/generic/firmware/fw_jump.bin"
run_in_qemu "./attestor.ke"

run_in_qemu "poweroff"
