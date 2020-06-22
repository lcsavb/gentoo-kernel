cmd_drivers/usb/roles/roles.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/usb/roles/roles.o drivers/usb/roles/class.o
