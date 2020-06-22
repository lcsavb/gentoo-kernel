cmd_crypto/rmd160.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/rmd160.ko crypto/rmd160.o crypto/rmd160.mod.o;  true
