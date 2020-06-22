cmd_fs/autofs/autofs4.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/autofs/autofs4.ko fs/autofs/autofs4.o fs/autofs/autofs4.mod.o;  true
