cmd_fs/nls/mac-iceland.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/mac-iceland.ko fs/nls/mac-iceland.o fs/nls/mac-iceland.mod.o;  true
