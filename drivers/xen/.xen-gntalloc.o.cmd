cmd_drivers/xen/xen-gntalloc.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/xen/xen-gntalloc.o drivers/xen/gntalloc.o
