cmd_drivers/vfio/vfio.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/vfio/vfio.ko drivers/vfio/vfio.o drivers/vfio/vfio.mod.o;  true
