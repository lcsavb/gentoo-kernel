cmd_virt/lib/irqbypass.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o virt/lib/irqbypass.ko virt/lib/irqbypass.o virt/lib/irqbypass.mod.o;  true
