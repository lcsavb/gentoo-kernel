cmd_fs/ufs/ufs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/ufs/ufs.ko fs/ufs/ufs.o fs/ufs/ufs.mod.o;  true
