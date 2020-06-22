cmd_crypto/cfb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/cfb.ko crypto/cfb.o crypto/cfb.mod.o;  true
