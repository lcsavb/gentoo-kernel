cmd_net/smc/smc_diag.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/smc/smc_diag.ko net/smc/smc_diag.o net/smc/smc_diag.mod.o;  true
