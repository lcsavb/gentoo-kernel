cmd_net/ife/ife.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ife/ife.ko net/ife/ife.o net/ife/ife.mod.o;  true
