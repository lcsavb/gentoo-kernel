cmd_drivers/nvdimm/nd_e820.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/nvdimm/nd_e820.o drivers/nvdimm/e820.o
