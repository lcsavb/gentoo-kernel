cmd_net/802/psnap.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/802/psnap.ko net/802/psnap.o net/802/psnap.mod.o;  true
