cmd_drivers/md/raid0.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/md/raid0.ko drivers/md/raid0.o drivers/md/raid0.mod.o;  true
