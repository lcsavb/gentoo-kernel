cmd_net/rds/rds_rdma.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/rds/rds_rdma.ko net/rds/rds_rdma.o net/rds/rds_rdma.mod.o;  true
