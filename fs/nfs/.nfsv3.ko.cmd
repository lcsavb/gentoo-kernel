cmd_fs/nfs/nfsv3.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nfs/nfsv3.ko fs/nfs/nfsv3.o fs/nfs/nfsv3.mod.o;  true
