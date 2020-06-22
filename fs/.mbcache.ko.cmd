cmd_fs/mbcache.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/mbcache.ko fs/mbcache.o fs/mbcache.mod.o;  true
