cmd_crypto/gf128mul.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/gf128mul.ko crypto/gf128mul.o crypto/gf128mul.mod.o;  true
