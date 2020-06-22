cmd_fs/fscache/fscache.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/fscache/fscache.ko fs/fscache/fscache.o fs/fscache/fscache.mod.o;  true
