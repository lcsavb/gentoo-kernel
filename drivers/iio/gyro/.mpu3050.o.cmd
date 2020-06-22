cmd_drivers/iio/gyro/mpu3050.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/iio/gyro/mpu3050.o drivers/iio/gyro/mpu3050-core.o drivers/iio/gyro/mpu3050-i2c.o
