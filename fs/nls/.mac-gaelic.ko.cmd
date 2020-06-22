cmd_fs/nls/mac-gaelic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/mac-gaelic.ko fs/nls/mac-gaelic.o fs/nls/mac-gaelic.mod.o;  true
