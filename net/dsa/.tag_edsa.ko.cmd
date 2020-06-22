cmd_net/dsa/tag_edsa.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/dsa/tag_edsa.ko net/dsa/tag_edsa.o net/dsa/tag_edsa.mod.o;  true
