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
	{ 0x3130e59d, "bmg160_pm_ops" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xe0967186, "bmg160_core_probe" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x2ddebb9e, "bmg160_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmg160_core,i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cbosch,bmg160");
MODULE_ALIAS("of:N*T*Cbosch,bmg160C*");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_gyro");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_gyroC*");
MODULE_ALIAS("i2c:bmg160");
MODULE_ALIAS("i2c:bmi055_gyro");
MODULE_ALIAS("acpi*:BMG0160:*");
MODULE_ALIAS("acpi*:BMI055B:*");

MODULE_INFO(srcversion, "84B0806D1B57A193808469D");
