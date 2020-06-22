cmd_fs/nls/mac-turkish.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/mac-turkish.ko fs/nls/mac-turkish.o fs/nls/mac-turkish.mod.o;  true
