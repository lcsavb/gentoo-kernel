cmd_drivers/dax/kmem.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/dax/kmem.ko drivers/dax/kmem.o drivers/dax/kmem.mod.o;  true
