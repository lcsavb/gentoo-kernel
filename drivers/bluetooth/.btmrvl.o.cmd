cmd_drivers/bluetooth/btmrvl.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/bluetooth/btmrvl.o drivers/bluetooth/btmrvl_main.o drivers/bluetooth/btmrvl_debugfs.o
