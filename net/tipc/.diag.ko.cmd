cmd_net/tipc/diag.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/tipc/diag.ko net/tipc/diag.o net/tipc/diag.mod.o;  true
