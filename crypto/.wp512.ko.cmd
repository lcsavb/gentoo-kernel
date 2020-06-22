cmd_crypto/wp512.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/wp512.ko crypto/wp512.o crypto/wp512.mod.o;  true
