cmd_drivers/fpga/dfl-fme.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/fpga/dfl-fme.o drivers/fpga/dfl-fme-main.o drivers/fpga/dfl-fme-pr.o drivers/fpga/dfl-fme-error.o
