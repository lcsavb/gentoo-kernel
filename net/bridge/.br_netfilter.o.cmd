cmd_net/bridge/br_netfilter.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/bridge/br_netfilter.o net/bridge/br_netfilter_hooks.o net/bridge/br_netfilter_ipv6.o
