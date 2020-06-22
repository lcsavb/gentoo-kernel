cmd_crypto/arc4.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/arc4.ko crypto/arc4.o crypto/arc4.mod.o;  true
