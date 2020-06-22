cmd_crypto/des_generic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/des_generic.ko crypto/des_generic.o crypto/des_generic.mod.o;  true
