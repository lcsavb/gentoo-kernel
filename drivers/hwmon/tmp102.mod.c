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
	{ 0x42a508e0, "_dev_info" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x930b0849, "devm_hwmon_device_register_with_info" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,tmp102");
MODULE_ALIAS("of:N*T*Cti,tmp102C*");
MODULE_ALIAS("i2c:tmp102");

MODULE_INFO(srcversion, "9C1D342D6381F04EEF989BD");
