cmd_crypto/ecc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/ecc.ko crypto/ecc.o crypto/ecc.mod.o;  true
