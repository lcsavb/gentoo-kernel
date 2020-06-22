cmd_kernel/torture.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o kernel/torture.ko kernel/torture.o kernel/torture.mod.o;  true
