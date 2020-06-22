cmd_fs/nls/mac-greek.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/mac-greek.ko fs/nls/mac-greek.o fs/nls/mac-greek.mod.o;  true
