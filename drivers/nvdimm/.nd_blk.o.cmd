cmd_drivers/nvdimm/nd_blk.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/nvdimm/nd_blk.o drivers/nvdimm/blk.o
