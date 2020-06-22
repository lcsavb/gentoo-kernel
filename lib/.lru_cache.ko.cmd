cmd_lib/lru_cache.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o lib/lru_cache.ko lib/lru_cache.o lib/lru_cache.mod.o;  true
