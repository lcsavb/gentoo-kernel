cmd_net/802/p8022.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/802/p8022.ko net/802/p8022.o net/802/p8022.mod.o;  true
