cmd_crypto/rmd128.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/rmd128.ko crypto/rmd128.o crypto/rmd128.mod.o;  true
