cmd_net/dsa/dsa_core.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/dsa/dsa_core.o net/dsa/dsa.o net/dsa/dsa2.o net/dsa/master.o net/dsa/port.o net/dsa/slave.o net/dsa/switch.o
