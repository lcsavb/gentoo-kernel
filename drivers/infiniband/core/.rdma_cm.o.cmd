cmd_drivers/infiniband/core/rdma_cm.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/infiniband/core/rdma_cm.o drivers/infiniband/core/cma.o drivers/infiniband/core/cma_configfs.o
