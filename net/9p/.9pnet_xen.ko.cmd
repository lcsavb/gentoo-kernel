cmd_net/9p/9pnet_xen.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/9p/9pnet_xen.ko net/9p/9pnet_xen.o net/9p/9pnet_xen.mod.o;  true
