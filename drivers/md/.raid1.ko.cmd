cmd_drivers/md/raid1.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/md/raid1.ko drivers/md/raid1.o drivers/md/raid1.mod.o;  true
