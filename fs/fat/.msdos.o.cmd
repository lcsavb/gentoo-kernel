cmd_fs/fat/msdos.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/fat/msdos.o fs/fat/namei_msdos.o
