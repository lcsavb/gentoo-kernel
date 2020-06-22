cmd_fs/pstore/ramoops.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/pstore/ramoops.o fs/pstore/ram.o fs/pstore/ram_core.o
