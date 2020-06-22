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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xe919636a, "thermal_zone_device_update" },
	{ 0x837ecb1a, "thermal_zone_get_zone_by_name" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:bxt_wcove_thermal");

MODULE_INFO(srcversion, "2E36221B6D9FD937727D527");
