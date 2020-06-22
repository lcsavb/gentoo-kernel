cmd_net/ipv4/udp_diag.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ipv4/udp_diag.ko net/ipv4/udp_diag.o net/ipv4/udp_diag.mod.o;  true
