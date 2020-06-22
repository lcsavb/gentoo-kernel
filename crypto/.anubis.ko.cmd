cmd_crypto/anubis.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/anubis.ko crypto/anubis.o crypto/anubis.mod.o;  true
