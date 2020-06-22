cmd_net/vmw_vsock/vsock.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/vmw_vsock/vsock.o net/vmw_vsock/af_vsock.o net/vmw_vsock/af_vsock_tap.o net/vmw_vsock/vsock_addr.o
