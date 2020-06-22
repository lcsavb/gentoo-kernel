cmd_net/rds/rds.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/rds/rds.ko net/rds/rds.o net/rds/rds.mod.o;  true
