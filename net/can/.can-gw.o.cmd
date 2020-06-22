cmd_net/can/can-gw.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/can/can-gw.o net/can/gw.o
