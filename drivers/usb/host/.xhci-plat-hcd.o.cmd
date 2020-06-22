cmd_drivers/usb/host/xhci-plat-hcd.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/usb/host/xhci-plat-hcd.o drivers/usb/host/xhci-plat.o
