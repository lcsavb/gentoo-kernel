cmd_net/tipc/tipc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/tipc/tipc.ko net/tipc/tipc.o net/tipc/tipc.mod.o;  true
