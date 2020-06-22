cmd_net/ipv6/ip6_vti.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ipv6/ip6_vti.ko net/ipv6/ip6_vti.o net/ipv6/ip6_vti.mod.o;  true
