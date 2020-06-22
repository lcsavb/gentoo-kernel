cmd_crypto/sm4_generic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/sm4_generic.ko crypto/sm4_generic.o crypto/sm4_generic.mod.o;  true
