cmd_drivers/iio/pressure/bmp280.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/iio/pressure/bmp280.o drivers/iio/pressure/bmp280-core.o drivers/iio/pressure/bmp280-regmap.o
