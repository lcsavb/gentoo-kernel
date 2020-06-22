cmd_net/ipv4/gre.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ipv4/gre.ko net/ipv4/gre.o net/ipv4/gre.mod.o;  true
