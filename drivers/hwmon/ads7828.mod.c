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
	{ 0x17b8d3, "regulator_get_voltage" },
	{ 0x256446e8, "devm_regulator_get_optional" },
	{ 0x81834404, "devm_hwmon_device_register_with_groups" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,ads7828");
MODULE_ALIAS("of:N*T*Cti,ads7828C*");
MODULE_ALIAS("of:N*T*Cti,ads7830");
MODULE_ALIAS("of:N*T*Cti,ads7830C*");
MODULE_ALIAS("i2c:ads7828");
MODULE_ALIAS("i2c:ads7830");

MODULE_INFO(srcversion, "D08CD566FA2631F07BE0AA5");
