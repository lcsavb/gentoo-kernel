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
	{ 0xb91e023c, "genphy_suspend" },
	{ 0x694074f5, "phy_drivers_unregister" },
	{ 0x9e79ec5b, "phy_drivers_register" },
	{ 0x6eae8dea, "phy_write_mmd" },
	{ 0xfb1184bd, "__genphy_config_aneg" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:00000011000000100110000011010001");
MODULE_ALIAS("mdio:00000011000000100110000011100001");
MODULE_ALIAS("mdio:11010101011001011010010000000000");
MODULE_ALIAS("mdio:11010101011001011010010000010000");
MODULE_ALIAS("mdio:11010101011001011010010000000001");
MODULE_ALIAS("mdio:11010101011001011010010000010001");
MODULE_ALIAS("mdio:11010101011001011010010000001000");
MODULE_ALIAS("mdio:11010101011001011010010000011000");
MODULE_ALIAS("mdio:11010101011001011010010000001001");
MODULE_ALIAS("mdio:11010101011001011010010000011001");

MODULE_INFO(srcversion, "8151151144CFEE0885A9416");
