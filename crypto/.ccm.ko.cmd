cmd_crypto/ccm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/ccm.ko crypto/ccm.o crypto/ccm.mod.o;  true
