cmd_fs/fat/vfat.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/fat/vfat.o fs/fat/namei_vfat.o
