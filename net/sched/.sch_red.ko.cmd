cmd_net/sched/sch_red.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/sched/sch_red.ko net/sched/sch_red.o net/sched/sch_red.mod.o;  true
