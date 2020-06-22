cmd_crypto/cryptd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/cryptd.ko crypto/cryptd.o crypto/cryptd.mod.o;  true
