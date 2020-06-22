cmd_net/kcm/kcm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/kcm/kcm.ko net/kcm/kcm.o net/kcm/kcm.mod.o;  true
