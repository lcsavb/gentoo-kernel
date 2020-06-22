cmd_crypto/ctr.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/ctr.ko crypto/ctr.o crypto/ctr.mod.o;  true
