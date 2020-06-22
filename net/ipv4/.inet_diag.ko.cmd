cmd_net/ipv4/inet_diag.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ipv4/inet_diag.ko net/ipv4/inet_diag.o net/ipv4/inet_diag.mod.o;  true
