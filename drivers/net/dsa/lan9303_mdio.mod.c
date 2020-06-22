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
	{ 0xada83f40, "lan9303_register_set" },
	{ 0x5754634f, "mdio_driver_unregister" },
	{ 0x2bf10d87, "mdio_driver_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x19cfc176, "lan9303_probe" },
	{ 0x19b68e53, "__devm_regmap_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd3bf657b, "mdiobus_read_nested" },
	{ 0x1d88f33a, "mdiobus_write_nested" },
	{ 0xed43c338, "lan9303_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lan9303-core,libphy");

MODULE_ALIAS("of:N*T*Csmsc,lan9303-mdio");
MODULE_ALIAS("of:N*T*Csmsc,lan9303-mdioC*");

MODULE_INFO(srcversion, "DC115F40B08BF0FEE81EF31");
