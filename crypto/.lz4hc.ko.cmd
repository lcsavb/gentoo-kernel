cmd_crypto/lz4hc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/lz4hc.ko crypto/lz4hc.o crypto/lz4hc.mod.o;  true
