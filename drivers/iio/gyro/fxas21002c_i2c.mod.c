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
	{ 0xa9e7cf7d, "fxas21002c_pm_ops" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xf2198be3, "fxas21002c_core_remove" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x5ed4568c, "fxas21002c_core_probe" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fxas21002c_core,i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cnxp,fxas21002c");
MODULE_ALIAS("of:N*T*Cnxp,fxas21002cC*");
MODULE_ALIAS("i2c:fxas21002c");

MODULE_INFO(srcversion, "E510B8C9A344B2E2FBD559A");
