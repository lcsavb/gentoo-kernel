cmd_net/atm/clip.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/atm/clip.ko net/atm/clip.o net/atm/clip.mod.o;  true
