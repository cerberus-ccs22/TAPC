# Artifact for #220

This is the artifacts of an anonymous submission #220 to CCS'22

## Directory Structure

* `AbstractPlatform`: A formal model for Cerberus extended from TAP
* `Common`: Some common definitions for the formal model
* `Apps`: Implemented/Modified applications
* `KeystoneImplementation`: Cerberus implementation on top of Keystone (diff.txt includes the diff from the latest master branch)

## How to Read the Code

All implementatios are incremental to the latest [Keystone](https://github.com/keystone-enclave/keystone).
Git logs have been removed to anonymize the submission.
Thus, see diff.txt in each of the components to see the difference between the latest master and our implementation

## How to Test

* Follow [docs](https://docs.keystone-enclave.org) to setup initial Keystone repo.
* Replace each of the components (sdk, sm, keystone-driver, keystone-runtime) with the ones that are provided in this repo

keystone-runtime is pulled from git repo, so we changed the URL in the [macro](https://github.com/anonymous1721/TAPC/tree/main/KeystoneImplementation/sdk/macros.cmake). This will download the correct version of Eyrie runtime.
Make sure to remove `build/examples` directory entirely before re-compiling the apps with the modified runtime.

### Sqlite

For sqlite, all source code / CMakeLists.txt are included in the directory.
Thus, simply copy the sqlite directory to `sdk/examples`, and add `add_subdirectory(sqlite)` to `sdk/examples/CMakelists.txt`.

Run the following command in `build` directory (of the Keystone repo)

```
make examples; cp examples/sqlite/sqlite-test.ke overlay/root; make image
```

This will make the `sqlite-test.ke` package available when you boot the machine

### Darkhttpd

Darkhttpd directory does not include a host program. Instead, it can use the modified host in `sdk/exmamples/hello`.

Statically compile darkhttpd by running

```
make
```

inside the `darkhttpd` directory, and then copy the `darkhttpd-static` into `build/overlay/root` directory.
And runt `make image`.

Do the following to copy host program of `hello`:

```
make examples
cp examples/hello/hello-runner overlay/root
cp examples/hello/eyrie-rt overlay/root
make image
```

Finally, boot the machine and run the following command

```
./hello-runner darkhttpd-static eyrie-rt
```

This will start a static web server with Cerberus.
