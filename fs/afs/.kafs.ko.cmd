cmd_fs/afs/kafs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/afs/kafs.ko fs/afs/kafs.o fs/afs/kafs.mod.o;  true
