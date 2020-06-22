cmd_drivers/xen/xen-gntdev.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/xen/xen-gntdev.o drivers/xen/gntdev.o
