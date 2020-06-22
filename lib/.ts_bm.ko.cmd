cmd_lib/ts_bm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o lib/ts_bm.ko lib/ts_bm.o lib/ts_bm.mod.o;  true
