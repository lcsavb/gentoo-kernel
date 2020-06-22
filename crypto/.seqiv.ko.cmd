cmd_crypto/seqiv.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/seqiv.ko crypto/seqiv.o crypto/seqiv.mod.o;  true
