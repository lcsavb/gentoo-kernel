cmd_net/l2tp/l2tp_ip6.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/l2tp/l2tp_ip6.ko net/l2tp/l2tp_ip6.o net/l2tp/l2tp_ip6.mod.o;  true
