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
	{ 0x88f6289a, "fixed_phy_unregister" },
	{ 0x5754634f, "mdio_driver_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2bf10d87, "mdio_driver_register" },
	{ 0x1da5f82d, "fixed_phy_register" },
	{ 0x5102946e, "dsa_register_switch" },
	{ 0xc44e5013, "dev_get_by_name" },
	{ 0x98001cfc, "init_net" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x7c21dc4a, "dsa_switch_alloc" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd3bf657b, "mdiobus_read_nested" },
	{ 0x1d88f33a, "mdiobus_write_nested" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0x486fd6bb, "dsa_unregister_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fixed_phy,libphy,dsa_core");


MODULE_INFO(srcversion, "0F5225C6789E0622B30FFFD");
