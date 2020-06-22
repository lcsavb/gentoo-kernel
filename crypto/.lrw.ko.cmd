cmd_crypto/lrw.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/lrw.ko crypto/lrw.o crypto/lrw.mod.o;  true
