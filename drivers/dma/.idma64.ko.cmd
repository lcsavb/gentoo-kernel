cmd_drivers/dma/idma64.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/dma/idma64.ko drivers/dma/idma64.o drivers/dma/idma64.mod.o;  true
