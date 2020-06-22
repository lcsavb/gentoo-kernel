cmd_fs/nls/nls_cp737.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/nls_cp737.ko fs/nls/nls_cp737.o fs/nls/nls_cp737.mod.o;  true
