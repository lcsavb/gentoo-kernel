cmd_net/tls/tls.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/tls/tls.o net/tls/tls_main.o net/tls/tls_sw.o net/tls/tls_device.o net/tls/tls_device_fallback.o
