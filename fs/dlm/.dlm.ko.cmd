cmd_fs/dlm/dlm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/dlm/dlm.ko fs/dlm/dlm.o fs/dlm/dlm.mod.o;  true
