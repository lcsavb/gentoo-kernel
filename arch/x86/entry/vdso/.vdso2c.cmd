cmd_arch/x86/entry/vdso/vdso2c := gcc -Wp,-MD,arch/x86/entry/vdso/.vdso2c.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89     -I./tools/include -I./include/uapi -I./arch//include/uapi    -o arch/x86/entry/vdso/vdso2c arch/x86/entry/vdso/vdso2c.c   

source_arch/x86/entry/vdso/vdso2c := arch/x86/entry/vdso/vdso2c.c

deps_arch/x86/entry/vdso/vdso2c := \
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
  /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include/stddef.h \
  /usr/include/bits/confname.h \
  /usr/include/bits/getopt_posix.h \
  /usr/include/bits/getopt_core.h \
  /usr/include/bits/unistd.h \
  /usr/include/bits/unistd_ext.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include/stdarg.h \
  /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h \
  /usr/include/bits/floatn.h \
  /usr/include/bits/floatn-common.h \
  /usr/include/sys/types.h \
  /usr/include/bits/types/clock_t.h \
  /usr/include/bits/types/clockid_t.h \
  /usr/include/bits/types/time_t.h \
  /usr/include/bits/types/timer_t.h \
  /usr/include/endian.h \
  /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/include/bits/uintn-identity.h \
  /usr/include/sys/select.h \
  /usr/include/bits/select.h \
  /usr/include/bits/types/sigset_t.h \
  /usr/include/bits/types/__sigset_t.h \
  /usr/include/bits/types/struct_timeval.h \
  /usr/include/bits/types/struct_timespec.h \
  /usr/include/bits/select2.h \
  /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/thread-shared-types.h \
  /usr/include/bits/pthreadtypes-arch.h \
  /usr/include/alloca.h \
  /usr/include/bits/stdlib-bsearch.h \
  /usr/include/bits/stdlib-float.h \
  /usr/include/bits/stdlib.h \
  /usr/include/stdio.h \
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
  /usr/include/string.h \
  /usr/include/bits/types/locale_t.h \
  /usr/include/bits/types/__locale_t.h \
  /usr/include/strings.h \
  /usr/include/bits/strings_fortified.h \
  /usr/include/bits/string_fortified.h \
  /usr/include/fcntl.h \
  /usr/include/bits/fcntl.h \
  /usr/include/bits/fcntl-linux.h \
  /usr/include/bits/stat.h \
  /usr/include/bits/fcntl2.h \
  /usr/include/err.h \
  /usr/include/sys/mman.h \
  /usr/include/bits/mman.h \
  /usr/include/bits/mman-map-flags-generic.h \
  /usr/include/bits/mman-linux.h \
  /usr/include/bits/mman-shared.h \
  tools/include/tools/le_byteshift.h \
  include/uapi/linux/elf.h \
  tools/include/linux/types.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include/stdbool.h \
  /usr/include/asm/types.h \
  include/uapi/asm-generic/types.h \
  include/uapi/asm-generic/int-ll64.h \
  /usr/include/asm/bitsperlong.h \
  tools/include/asm-generic/bitsperlong.h \
  tools/include/uapi/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /usr/include/asm/posix_types.h \
  /usr/include/asm/posix_types_64.h \
  include/uapi/asm-generic/posix_types.h \
  include/uapi/linux/elf-em.h \
  tools/include/linux/kernel.h \
  /usr/include/assert.h \
  tools/include/linux/compiler.h \
  tools/include/linux/compiler-gcc.h \
  /usr/include/byteswap.h \
  arch/x86/entry/vdso/vdso2c.h \

arch/x86/entry/vdso/vdso2c: $(deps_arch/x86/entry/vdso/vdso2c)

$(deps_arch/x86/entry/vdso/vdso2c):
