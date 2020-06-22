cmd_crypto/aes_ti.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/aes_ti.ko crypto/aes_ti.o crypto/aes_ti.mod.o;  true
