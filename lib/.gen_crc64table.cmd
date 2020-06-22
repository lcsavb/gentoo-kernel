cmd_lib/gen_crc64table := gcc -Wp,-MD,lib/.gen_crc64table.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o lib/gen_crc64table lib/gen_crc64table.c   

source_lib/gen_crc64table := lib/gen_crc64table.c

deps_lib/gen_crc64table := \
  /usr/include/stdc-predef.h \
  /usr/include/inttypes.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h \
  /usr/include/bits/long-double.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include/stdint.h \
  /usr/include/stdint.h \
  /usr/include/bits/libc-header-start.h \
  /usr/include/bits/types.h \
  /usr/include/bits/timesize.h \
  /usr/include/bits/typesizes.h \
  /usr/include/bits/time64.h \
  /usr/include/bits/wchar.h \
  /usr/include/bits/stdint-intn.h \
  /usr/include/bits/stdint-uintn.h \
  /usr/include/stdio.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include/stddef.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include/stdarg.h \
  /usr/include/bits/types/__fpos_t.h \
  /usr/include/bits/types/__mbstate_t.h \
  /usr/include/bits/types/__fpos64_t.h \
  /usr/include/bits/types/__FILE.h \
  /usr/include/bits/types/FILE.h \
  /usr/include/bits/types/struct_FILE.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \
  /usr/include/bits/stdio.h \
  /usr/include/bits/stdio2.h \

lib/gen_crc64table: $(deps_lib/gen_crc64table)

$(deps_lib/gen_crc64table):
