cmd_net/9p/9pnet_rdma.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/9p/9pnet_rdma.ko net/9p/9pnet_rdma.o net/9p/9pnet_rdma.mod.o;  true
