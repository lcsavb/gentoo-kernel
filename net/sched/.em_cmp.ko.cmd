cmd_net/sched/em_cmp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/sched/em_cmp.ko net/sched/em_cmp.o net/sched/em_cmp.mod.o;  true
