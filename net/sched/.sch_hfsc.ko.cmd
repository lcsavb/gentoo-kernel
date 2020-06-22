cmd_net/sched/sch_hfsc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/sched/sch_hfsc.ko net/sched/sch_hfsc.o net/sched/sch_hfsc.mod.o;  true
