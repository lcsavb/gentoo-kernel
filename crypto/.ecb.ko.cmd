cmd_crypto/ecb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/ecb.ko crypto/ecb.o crypto/ecb.mod.o;  true
