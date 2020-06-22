cmd_drivers/net/vmxnet3/vmxnet3.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/net/vmxnet3/vmxnet3.o drivers/net/vmxnet3/vmxnet3_drv.o drivers/net/vmxnet3/vmxnet3_ethtool.o
