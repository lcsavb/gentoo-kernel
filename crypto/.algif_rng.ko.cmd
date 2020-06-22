cmd_crypto/algif_rng.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/algif_rng.ko crypto/algif_rng.o crypto/algif_rng.mod.o;  true
