cmd_crypto/authencesn.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/authencesn.ko crypto/authencesn.o crypto/authencesn.mod.o;  true
