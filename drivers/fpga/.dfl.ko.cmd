cmd_drivers/fpga/dfl.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/fpga/dfl.ko drivers/fpga/dfl.o drivers/fpga/dfl.mod.o;  true
