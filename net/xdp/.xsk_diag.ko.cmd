cmd_net/xdp/xsk_diag.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/xdp/xsk_diag.ko net/xdp/xsk_diag.o net/xdp/xsk_diag.mod.o;  true
