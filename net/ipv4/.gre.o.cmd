cmd_net/ipv4/gre.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/ipv4/gre.o net/ipv4/gre_demux.o
