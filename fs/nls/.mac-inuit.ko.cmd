cmd_fs/nls/mac-inuit.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/mac-inuit.ko fs/nls/mac-inuit.o fs/nls/mac-inuit.mod.o;  true
