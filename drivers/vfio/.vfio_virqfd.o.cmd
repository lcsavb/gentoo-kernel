cmd_drivers/vfio/vfio_virqfd.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/vfio/vfio_virqfd.o drivers/vfio/virqfd.o
