cmd_net/802/mrp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/802/mrp.ko net/802/mrp.o net/802/mrp.mod.o;  true
