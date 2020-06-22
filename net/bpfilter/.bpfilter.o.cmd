cmd_net/bpfilter/bpfilter.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/bpfilter/bpfilter.o net/bpfilter/bpfilter_kern.o net/bpfilter/bpfilter_umh_blob.o
