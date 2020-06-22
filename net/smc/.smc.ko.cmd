cmd_net/smc/smc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/smc/smc.ko net/smc/smc.o net/smc/smc.mod.o;  true
