cmd_drivers/xen/xen-evtchn.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/xen/xen-evtchn.o drivers/xen/evtchn.o
