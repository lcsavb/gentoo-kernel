cmd_drivers/acpi/video.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/acpi/video.o drivers/acpi/acpi_video.o drivers/acpi/video_detect.o
