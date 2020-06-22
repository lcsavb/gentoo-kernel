cmd_net/bpfilter/bpfilter_umh_blob.o := gcc -Wp,-MD,net/bpfilter/.bpfilter_umh_blob.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -D__ASSEMBLY__ -fno-PIE -m64 -DCONFIG_X86_X32_ABI -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_AVX512=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -DCC_USING_FENTRY  -DMODULE  -c -o net/bpfilter/bpfilter_umh_blob.o net/bpfilter/bpfilter_umh_blob.S

source_net/bpfilter/bpfilter_umh_blob.o := net/bpfilter/bpfilter_umh_blob.S

deps_net/bpfilter/bpfilter_umh_blob.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \

net/bpfilter/bpfilter_umh_blob.o: $(deps_net/bpfilter/bpfilter_umh_blob.o)

$(deps_net/bpfilter/bpfilter_umh_blob.o):
