cmd_drivers/base/firmware_loader/builtin/amdgpu/tonga_sdma1.bin.gen.o := gcc -Wp,-MD,drivers/base/firmware_loader/builtin/amdgpu/.tonga_sdma1.bin.gen.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -D__ASSEMBLY__ -fno-PIE -m64 -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_AVX512=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1    -c -o drivers/base/firmware_loader/builtin/amdgpu/tonga_sdma1.bin.gen.o drivers/base/firmware_loader/builtin/amdgpu/tonga_sdma1.bin.gen.S

source_drivers/base/firmware_loader/builtin/amdgpu/tonga_sdma1.bin.gen.o := drivers/base/firmware_loader/builtin/amdgpu/tonga_sdma1.bin.gen.S

deps_drivers/base/firmware_loader/builtin/amdgpu/tonga_sdma1.bin.gen.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \

drivers/base/firmware_loader/builtin/amdgpu/tonga_sdma1.bin.gen.o: $(deps_drivers/base/firmware_loader/builtin/amdgpu/tonga_sdma1.bin.gen.o)

$(deps_drivers/base/firmware_loader/builtin/amdgpu/tonga_sdma1.bin.gen.o):
