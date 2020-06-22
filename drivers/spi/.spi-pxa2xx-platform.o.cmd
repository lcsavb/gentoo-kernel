cmd_drivers/spi/spi-pxa2xx-platform.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/spi/spi-pxa2xx-platform.o drivers/spi/spi-pxa2xx.o drivers/spi/spi-pxa2xx-dma.o
