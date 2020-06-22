cmd_drivers/nvdimm/nd_btt.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/nvdimm/nd_btt.o drivers/nvdimm/btt.o
