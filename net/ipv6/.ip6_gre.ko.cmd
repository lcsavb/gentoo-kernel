cmd_net/ipv6/ip6_gre.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ipv6/ip6_gre.ko net/ipv6/ip6_gre.o net/ipv6/ip6_gre.mod.o;  true
