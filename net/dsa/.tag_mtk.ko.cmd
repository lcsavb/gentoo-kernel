cmd_net/dsa/tag_mtk.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/dsa/tag_mtk.ko net/dsa/tag_mtk.o net/dsa/tag_mtk.mod.o;  true
