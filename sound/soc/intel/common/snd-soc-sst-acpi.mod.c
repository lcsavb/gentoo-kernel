#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0x5fa38f0, "snd_soc_acpi_intel_broadwell_machines" },
	{ 0xbba8cdfa, "snd_soc_acpi_find_machine" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc424584d, "snd_soc_acpi_intel_haswell_machines" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xa4d6f89a, "release_firmware" },
};

MODULE_INFO(depends, "snd-soc-acpi-intel-match,snd-soc-acpi");

MODULE_ALIAS("acpi*:INT33C8:*");
MODULE_ALIAS("acpi*:INT3438:*");

MODULE_INFO(srcversion, "019BA8D78B4566BBF143974");
