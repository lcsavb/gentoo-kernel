cmd_net/ceph/libceph.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ceph/libceph.ko net/ceph/libceph.o net/ceph/libceph.mod.o;  true
