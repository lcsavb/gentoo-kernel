cmd_drivers/md/raid10.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/md/raid10.ko drivers/md/raid10.o drivers/md/raid10.mod.o;  true
