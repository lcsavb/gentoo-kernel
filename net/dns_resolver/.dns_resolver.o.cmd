cmd_net/dns_resolver/dns_resolver.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/dns_resolver/dns_resolver.o net/dns_resolver/dns_key.o net/dns_resolver/dns_query.o
