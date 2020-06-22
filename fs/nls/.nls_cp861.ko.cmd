cmd_fs/nls/nls_cp861.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/nls_cp861.ko fs/nls/nls_cp861.o fs/nls/nls_cp861.mod.o;  true
