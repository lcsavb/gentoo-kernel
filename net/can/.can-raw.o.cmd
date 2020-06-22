cmd_net/can/can-raw.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/can/can-raw.o net/can/raw.o
