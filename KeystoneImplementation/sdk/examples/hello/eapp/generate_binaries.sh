#for i in 1 2 4 8 16 32 48 64 80 96 112 128 144 160 176 192 208 224 240 256 272 288 304 320 336 352 368 384 400; do
for i in 50 100 150 200 250 300 350 400; do
  echo $i
  sed "s/size = .*/size = $i;/g" -i hello.c
  riscv64-unknown-linux-musl-gcc -static -I${KEYSTONE_SDK_DIR}/include/app -o hello.$i.bin hello.c
done
