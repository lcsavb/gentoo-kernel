cmd_net/ipv6/ila/ila.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/ipv6/ila/ila.o net/ipv6/ila/ila_main.o net/ipv6/ila/ila_common.o net/ipv6/ila/ila_lwt.o net/ipv6/ila/ila_xlat.o
