cmd_drivers/infiniband/core/ib_umad.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/infiniband/core/ib_umad.o drivers/infiniband/core/user_mad.o
