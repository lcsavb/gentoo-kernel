cmd_crypto/md4.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o;  true
