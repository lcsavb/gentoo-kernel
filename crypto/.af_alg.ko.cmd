cmd_crypto/af_alg.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/af_alg.ko crypto/af_alg.o crypto/af_alg.mod.o;  true
