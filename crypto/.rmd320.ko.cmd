cmd_crypto/rmd320.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/rmd320.ko crypto/rmd320.o crypto/rmd320.mod.o;  true
