cmd_fs/minix/minix.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/minix/minix.ko fs/minix/minix.o fs/minix/minix.mod.o;  true
