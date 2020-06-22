cmd_drivers/hid/wacom.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/hid/wacom.o drivers/hid/wacom_wac.o drivers/hid/wacom_sys.o
