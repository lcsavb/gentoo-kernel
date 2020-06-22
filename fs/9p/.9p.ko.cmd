cmd_fs/9p/9p.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/9p/9p.ko fs/9p/9p.o fs/9p/9p.mod.o;  true
