cmd_net/sched/cls_fw.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/sched/cls_fw.ko net/sched/cls_fw.o net/sched/cls_fw.mod.o;  true
