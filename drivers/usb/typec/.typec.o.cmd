cmd_drivers/usb/typec/typec.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/usb/typec/typec.o drivers/usb/typec/class.o drivers/usb/typec/mux.o drivers/usb/typec/bus.o
