cmd_fs/nls/nls_koi8-r.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/nls_koi8-r.ko fs/nls/nls_koi8-r.o fs/nls/nls_koi8-r.mod.o;  true
