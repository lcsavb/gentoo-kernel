cmd_crypto/aegis128.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o crypto/aegis128.o crypto/aegis128-core.o
