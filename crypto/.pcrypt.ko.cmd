cmd_crypto/pcrypt.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/pcrypt.ko crypto/pcrypt.o crypto/pcrypt.mod.o;  true
