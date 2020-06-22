cmd_net/bluetooth/hidp/hidp.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/bluetooth/hidp/hidp.o net/bluetooth/hidp/core.o net/bluetooth/hidp/sock.o
