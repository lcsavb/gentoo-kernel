cmd_crypto/authenc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/authenc.ko crypto/authenc.o crypto/authenc.mod.o;  true
