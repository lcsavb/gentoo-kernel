cmd_net/ax25/ax25.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ax25/ax25.ko net/ax25/ax25.o net/ax25/ax25.mod.o;  true
