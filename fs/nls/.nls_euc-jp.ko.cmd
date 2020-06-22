cmd_fs/nls/nls_euc-jp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/nls_euc-jp.ko fs/nls/nls_euc-jp.o fs/nls/nls_euc-jp.mod.o;  true
