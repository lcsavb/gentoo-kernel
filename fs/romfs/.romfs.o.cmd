cmd_fs/romfs/romfs.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/romfs/romfs.o fs/romfs/storage.o fs/romfs/super.o
