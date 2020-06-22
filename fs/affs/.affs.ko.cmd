cmd_fs/affs/affs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/affs/affs.ko fs/affs/affs.o fs/affs/affs.mod.o;  true
