cmd_fs/cramfs/cramfs.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/cramfs/cramfs.o fs/cramfs/inode.o fs/cramfs/uncompress.o
