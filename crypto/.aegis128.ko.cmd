cmd_crypto/aegis128.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/aegis128.ko crypto/aegis128.o crypto/aegis128.mod.o;  true
