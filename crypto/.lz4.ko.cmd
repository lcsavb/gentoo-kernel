cmd_crypto/lz4.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/lz4.ko crypto/lz4.o crypto/lz4.mod.o;  true
