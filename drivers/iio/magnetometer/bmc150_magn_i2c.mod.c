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
	{ 0x6a570c4f, "bmc150_magn_pm_ops" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x250780b7, "bmc150_magn_probe" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xab2e888b, "bmc150_magn_regmap_config" },
	{ 0xf0ddbf21, "bmc150_magn_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmc150_magn,i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cbosch,bmc150_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmc150_magnC*");
MODULE_ALIAS("of:N*T*Cbosch,bmc156_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmc156_magnC*");
MODULE_ALIAS("of:N*T*Cbosch,bmm150_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmm150_magnC*");
MODULE_ALIAS("i2c:bmc150_magn");
MODULE_ALIAS("i2c:bmc156_magn");
MODULE_ALIAS("i2c:bmm150_magn");
MODULE_ALIAS("acpi*:BMC150B:*");
MODULE_ALIAS("acpi*:BMC156B:*");
MODULE_ALIAS("acpi*:BMM150B:*");

MODULE_INFO(srcversion, "6181DA1DC51C743FB1E40BD");
