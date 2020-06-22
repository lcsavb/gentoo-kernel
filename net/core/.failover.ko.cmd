cmd_net/core/failover.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/core/failover.ko net/core/failover.o net/core/failover.mod.o;  true
