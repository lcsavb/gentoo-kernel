cmd_net/can/can.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/can/can.ko net/can/can.o net/can/can.mod.o;  true
