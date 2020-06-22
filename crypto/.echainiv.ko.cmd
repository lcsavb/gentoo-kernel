cmd_crypto/echainiv.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/echainiv.ko crypto/echainiv.o crypto/echainiv.mod.o;  true
