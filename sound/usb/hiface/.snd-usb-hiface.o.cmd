cmd_sound/usb/hiface/snd-usb-hiface.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o sound/usb/hiface/snd-usb-hiface.o sound/usb/hiface/chip.o sound/usb/hiface/pcm.o
