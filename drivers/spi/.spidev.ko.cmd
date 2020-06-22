cmd_drivers/spi/spidev.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/spi/spidev.ko drivers/spi/spidev.o drivers/spi/spidev.mod.o;  true
