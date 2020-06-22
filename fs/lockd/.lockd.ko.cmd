cmd_fs/lockd/lockd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/lockd/lockd.ko fs/lockd/lockd.o fs/lockd/lockd.mod.o;  true
