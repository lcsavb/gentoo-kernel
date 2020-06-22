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
	{ 0x61b02a9b, "bcm_phy_get_strings" },
	{ 0x836e6e7d, "genphy_resume" },
	{ 0xb91e023c, "genphy_suspend" },
	{ 0xf766ca1b, "bcm_phy_config_intr" },
	{ 0xa7adbb30, "bcm_phy_ack_intr" },
	{ 0x694074f5, "phy_drivers_unregister" },
	{ 0x9e79ec5b, "phy_drivers_register" },
	{ 0x3d6bdc33, "bcm_phy_read_exp" },
	{ 0x29e1cb9a, "bcm_phy_write_exp" },
	{ 0xfb1184bd, "__genphy_config_aneg" },
	{ 0x4601d93d, "bcm_phy_write_shadow" },
	{ 0x2d02a289, "bcm_phy_read_shadow" },
	{ 0xecd813ce, "bcm54xx_auxctl_write" },
	{ 0xcac979b3, "bcm54xx_auxctl_read" },
	{ 0x56dd42bc, "genphy_read_status" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0x3ed70d3e, "bcm_phy_get_sset_count" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf8345371, "bcm_phy_get_stats" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bcm-phy-lib,libphy");

MODULE_ALIAS("mdio:0000000000100000011000000111????");
MODULE_ALIAS("mdio:0000000000100000011000001110????");
MODULE_ALIAS("mdio:0110000000001101100001001010????");
MODULE_ALIAS("mdio:0000000000100000011000001100????");
MODULE_ALIAS("mdio:0000001101100010010111100110????");
MODULE_ALIAS("mdio:0000001101100010010111010001????");
MODULE_ALIAS("mdio:0000000000100000011000001011????");
MODULE_ALIAS("mdio:0000000101000011101111001010????");
MODULE_ALIAS("mdio:0000001101100010010111010000????");
MODULE_ALIAS("mdio:0000000101000011101111001011????");
MODULE_ALIAS("mdio:0000000101000011101111010110????");
MODULE_ALIAS("mdio:0000000101000011101111010111????");
MODULE_ALIAS("mdio:0000001101100010010111011001????");
MODULE_ALIAS("mdio:0000000101000011101111000111????");
MODULE_ALIAS("mdio:0000000101000011101111000011????");
MODULE_ALIAS("mdio:0000000101000011101111001111????");
MODULE_ALIAS("mdio:0000001101100010010111001101????");

MODULE_INFO(srcversion, "2ED3CE9E6E13220E56C7318");
