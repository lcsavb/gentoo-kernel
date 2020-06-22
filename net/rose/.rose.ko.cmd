cmd_net/rose/rose.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/rose/rose.ko net/rose/rose.o net/rose/rose.mod.o;  true
