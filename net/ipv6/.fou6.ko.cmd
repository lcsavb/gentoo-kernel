cmd_net/ipv6/fou6.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ipv6/fou6.ko net/ipv6/fou6.o net/ipv6/fou6.mod.o;  true
