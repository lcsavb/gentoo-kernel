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
	{ 0x195b708e, "power_supply_changed" },
	{ 0x17475388, "_dev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0x182b9d7, "power_supply_register" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xe0503b42, "power_supply_get_drvdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdd65ca27, "power_supply_unregister" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:smb347");

MODULE_INFO(srcversion, "028D3BA33CCA8F84A465335");
