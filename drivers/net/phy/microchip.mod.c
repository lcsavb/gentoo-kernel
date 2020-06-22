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
	{ 0x836e6e7d, "genphy_resume" },
	{ 0x694074f5, "phy_drivers_unregister" },
	{ 0x9e79ec5b, "phy_drivers_register" },
	{ 0x6eae8dea, "phy_write_mmd" },
	{ 0x17475388, "_dev_warn" },
	{ 0x18499f4f, "phy_restore_page" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2edeb0f, "phy_save_page" },
	{ 0x2f12efa3, "phy_read_mmd" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xb91e023c, "genphy_suspend" },
	{ 0xfb1184bd, "__genphy_config_aneg" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0xfa2657e9, "__mdiobus_read" },
	{ 0x6be4e56c, "__mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000000000000111110000010011????");

MODULE_INFO(srcversion, "15AE7DD4C1E339BA1265926");
