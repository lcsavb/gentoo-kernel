cmd_crypto/rmd256.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/rmd256.ko crypto/rmd256.o crypto/rmd256.mod.o;  true
