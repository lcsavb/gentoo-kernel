cmd_crypto/crypto_simd.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o crypto/crypto_simd.o crypto/simd.o
