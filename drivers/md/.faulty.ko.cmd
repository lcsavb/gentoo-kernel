cmd_drivers/md/faulty.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/md/faulty.ko drivers/md/faulty.o drivers/md/faulty.mod.o;  true
