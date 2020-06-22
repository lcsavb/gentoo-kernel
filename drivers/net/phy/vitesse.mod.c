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
	{ 0x694074f5, "phy_drivers_unregister" },
	{ 0x9e79ec5b, "phy_drivers_register" },
	{ 0x16bec3bc, "genphy_setup_forced" },
	{ 0xfb1184bd, "__genphy_config_aneg" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0xfa2657e9, "__mdiobus_read" },
	{ 0x6be4e56c, "__mdiobus_write" },
	{ 0x98c72135, "phy_modify" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:????????????1111110001100010????");
MODULE_ALIAS("mdio:????????????11111100011011??????");
MODULE_ALIAS("mdio:????????????0111000001001101????");
MODULE_ALIAS("mdio:????????????0111000001000101????");
MODULE_ALIAS("mdio:????????????0111000001001000????");
MODULE_ALIAS("mdio:????????????0111000001010101????");
MODULE_ALIAS("mdio:????????????0111000001011000????");
MODULE_ALIAS("mdio:????????????0111000001100110????");
MODULE_ALIAS("mdio:????????????1111110001010101????");
MODULE_ALIAS("mdio:????????????1111110001001011????");

MODULE_INFO(srcversion, "99C6A88B37F6FB88399C06F");
