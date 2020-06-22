cmd_crypto/xcbc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/xcbc.ko crypto/xcbc.o crypto/xcbc.mod.o;  true
