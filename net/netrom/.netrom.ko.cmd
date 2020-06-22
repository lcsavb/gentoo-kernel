cmd_net/netrom/netrom.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/netrom/netrom.ko net/netrom/netrom.o net/netrom/netrom.mod.o;  true
