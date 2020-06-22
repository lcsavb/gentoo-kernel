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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8f8dcef1, "axp20x_device_probe" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x5d5da15a, "axp20x_match_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdd4d0b3c, "axp20x_device_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,axp20x,regmap-i2c");

MODULE_ALIAS("acpi*:INT33F4:*");
MODULE_ALIAS("i2c:axp152");
MODULE_ALIAS("i2c:axp202");
MODULE_ALIAS("i2c:axp209");
MODULE_ALIAS("i2c:axp221");
MODULE_ALIAS("i2c:axp223");
MODULE_ALIAS("i2c:axp806");
MODULE_ALIAS("of:N*T*Cx-powers,axp152");
MODULE_ALIAS("of:N*T*Cx-powers,axp152C*");
MODULE_ALIAS("of:N*T*Cx-powers,axp202");
MODULE_ALIAS("of:N*T*Cx-powers,axp202C*");
MODULE_ALIAS("of:N*T*Cx-powers,axp209");
MODULE_ALIAS("of:N*T*Cx-powers,axp209C*");
MODULE_ALIAS("of:N*T*Cx-powers,axp221");
MODULE_ALIAS("of:N*T*Cx-powers,axp221C*");
MODULE_ALIAS("of:N*T*Cx-powers,axp223");
MODULE_ALIAS("of:N*T*Cx-powers,axp223C*");
MODULE_ALIAS("of:N*T*Cx-powers,axp806");
MODULE_ALIAS("of:N*T*Cx-powers,axp806C*");

MODULE_INFO(srcversion, "30BB49E211BDEFEFF82083C");
