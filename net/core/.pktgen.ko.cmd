cmd_net/core/pktgen.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/core/pktgen.ko net/core/pktgen.o net/core/pktgen.mod.o;  true
