cmd_fs/nls/mac-roman.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/mac-roman.ko fs/nls/mac-roman.o fs/nls/mac-roman.mod.o;  true
