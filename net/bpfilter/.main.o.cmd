cmd_net/bpfilter/main.o := gcc -Wp,-MD,net/bpfilter/.main.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89   -I ./tools/include/ -I ./tools/include/uapi     -c -o net/bpfilter/main.o net/bpfilter/main.c

source_net/bpfilter/main.o := net/bpfilter/main.c

deps_net/bpfilter/main.o := \
  /usr/include/stdc-predef.h \
  /usr/include/sys/uio.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h \
  /usr/include/bits/long-double.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-64.h \
  /usr/include/sys/types.h \
  /usr/include/bits/types.h \
  /usr/include/bits/timesize.h \
  /usr/include/bits/typesizes.h \
  /usr/include/bits/time64.h \
  /usr/include/bits/types/clock_t.h \
  /usr/include/bits/types/clockid_t.h \
  /usr/include/bits/types/time_t.h \
  /usr/include/bits/types/timer_t.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include/stddef.h \
  /usr/include/bits/stdint-intn.h \
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
  /usr/include/bits/types/struct_iovec.h \
  /usr/include/bits/uio_lim.h \
  /usr/include/bits/uio-ext.h \
  /usr/include/errno.h \
  /usr/include/bits/errno.h \
  /usr/include/linux/errno.h \
  tools/include/uapi/asm/errno.h \
  tools/include/uapi/../../arch/x86/include/uapi/asm/errno.h \
  tools/include/uapi/asm-generic/errno.h \
  tools/include/uapi/asm-generic/errno-base.h \
  /usr/include/bits/types/error_t.h \
  /usr/include/stdio.h \
  /usr/include/bits/libc-header-start.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include/stdarg.h \
  /usr/include/bits/types/__fpos_t.h \
  /usr/include/bits/types/__mbstate_t.h \
  /usr/include/bits/types/__fpos64_t.h \
  /usr/include/bits/types/__FILE.h \
  /usr/include/bits/types/FILE.h \
  /usr/include/bits/types/struct_FILE.h \
  /usr/include/bits/types/cookie_io_functions_t.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \
  /usr/include/bits/stdio.h \
  /usr/include/bits/stdio2.h \
  /usr/include/sys/socket.h \
  /usr/include/bits/socket.h \
  /usr/include/bits/socket_type.h \
  /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h \
  tools/include/uapi/asm-generic/socket.h \
  /usr/include/linux/posix_types.h \
  /usr/include/linux/stddef.h \
  /usr/include/asm/posix_types.h \
  /usr/include/asm/posix_types_64.h \
  /usr/include/asm-generic/posix_types.h \
  tools/include/uapi/asm/bitsperlong.h \
  tools/include/uapi/asm/../../../arch/x86/include/uapi/asm/bitsperlong.h \
  tools/include/asm-generic/bitsperlong.h \
  tools/include/uapi/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /usr/include/asm/sockios.h \
  /usr/include/asm-generic/sockios.h \
  /usr/include/bits/types/struct_osockaddr.h \
  /usr/include/bits/socket2.h \
  /usr/include/fcntl.h \
  /usr/include/bits/fcntl.h \
  /usr/include/bits/fcntl-linux.h \
  /usr/include/linux/falloc.h \
  /usr/include/bits/stat.h \
  /usr/include/bits/fcntl2.h \
  /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h \
  /usr/include/bits/confname.h \
  /usr/include/bits/getopt_posix.h \
  /usr/include/bits/getopt_core.h \
  /usr/include/bits/unistd.h \
  /usr/include/bits/unistd_ext.h \
  net/bpfilter/../../include/uapi/linux/bpf.h \
    $(wildcard include/config/efficient/unaligned/access.h) \
    $(wildcard include/config/cgroup/net/classid.h) \
    $(wildcard include/config/ip/route/classid.h) \
    $(wildcard include/config/bpf/kprobe/override.h) \
    $(wildcard include/config/function/error/injection.h) \
    $(wildcard include/config/xfrm.h) \
    $(wildcard include/config/bpf/lirc/mode2.h) \
    $(wildcard include/config/sock/cgroup/data.h) \
    $(wildcard include/config/net.h) \
  tools/include/linux/types.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include/stdbool.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include/stdint.h \
  /usr/include/stdint.h \
  /usr/include/bits/wchar.h \
  /usr/include/bits/stdint-uintn.h \
  /usr/include/asm/types.h \
  /usr/include/asm-generic/types.h \
  /usr/include/asm-generic/int-ll64.h \
  tools/include/uapi/linux/bpf_common.h \
  /usr/include/asm/unistd.h \
  /usr/include/asm/unistd_64.h \
  net/bpfilter/msgfmt.h \

net/bpfilter/main.o: $(deps_net/bpfilter/main.o)

$(deps_net/bpfilter/main.o):
