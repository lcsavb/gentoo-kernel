cmd_drivers/iio/accel/st_accel.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/iio/accel/st_accel.o drivers/iio/accel/st_accel_core.o drivers/iio/accel/st_accel_buffer.o
