cmd_fs/nls/mac-celtic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/mac-celtic.ko fs/nls/mac-celtic.o fs/nls/mac-celtic.mod.o;  true
