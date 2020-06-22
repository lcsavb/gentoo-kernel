cmd_net/sched/act_mpls.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/sched/act_mpls.ko net/sched/act_mpls.o net/sched/act_mpls.mod.o;  true
