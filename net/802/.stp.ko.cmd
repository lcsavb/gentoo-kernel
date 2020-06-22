cmd_net/802/stp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/802/stp.ko net/802/stp.o net/802/stp.mod.o;  true
