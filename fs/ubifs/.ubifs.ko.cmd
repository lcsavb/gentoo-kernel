cmd_fs/ubifs/ubifs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/ubifs/ubifs.ko fs/ubifs/ubifs.o fs/ubifs/ubifs.mod.o;  true
