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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xe8d32f6a, "mfd_remove_devices" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0x5f5897ee, "mfd_add_devices" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x396a690, "regmap_add_irq_chip" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0x17cc7300, "regmap_write" },
};

MODULE_INFO(depends, "mfd-core");


MODULE_INFO(srcversion, "F62B6223162DA9F93904BC6");
