cmd_crypto/cmac.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/cmac.ko crypto/cmac.o crypto/cmac.mod.o;  true
