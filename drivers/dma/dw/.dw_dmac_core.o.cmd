cmd_drivers/dma/dw/dw_dmac_core.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/dma/dw/dw_dmac_core.o drivers/dma/dw/core.o drivers/dma/dw/dw.o drivers/dma/dw/idma32.o
