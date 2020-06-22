cmd_crypto/nhpoly1305.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/nhpoly1305.ko crypto/nhpoly1305.o crypto/nhpoly1305.mod.o;  true
