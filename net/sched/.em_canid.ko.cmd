cmd_net/sched/em_canid.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/sched/em_canid.ko net/sched/em_canid.o net/sched/em_canid.mod.o;  true
