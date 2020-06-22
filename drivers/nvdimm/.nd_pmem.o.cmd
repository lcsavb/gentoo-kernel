cmd_drivers/nvdimm/nd_pmem.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/nvdimm/nd_pmem.o drivers/nvdimm/pmem.o
