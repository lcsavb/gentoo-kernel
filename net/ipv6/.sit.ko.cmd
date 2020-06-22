cmd_net/ipv6/sit.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ipv6/sit.ko net/ipv6/sit.o net/ipv6/sit.mod.o;  true
