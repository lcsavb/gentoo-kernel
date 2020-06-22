cmd_net/can/can.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/can/can.o net/can/af_can.o net/can/proc.o
