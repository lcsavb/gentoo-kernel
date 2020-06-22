cmd_fs/nfs/nfs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nfs/nfs.ko fs/nfs/nfs.o fs/nfs/nfs.mod.o;  true
