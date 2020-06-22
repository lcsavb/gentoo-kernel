cmd_crypto/xor.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/xor.ko crypto/xor.o crypto/xor.mod.o;  true
