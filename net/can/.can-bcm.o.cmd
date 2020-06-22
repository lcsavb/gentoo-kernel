cmd_net/can/can-bcm.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/can/can-bcm.o net/can/bcm.o
