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
	{ 0xaddb2d75, "genphy_loopback" },
	{ 0x4648b2aa, "phy_gbit_fibre_features" },
	{ 0x56dd42bc, "genphy_read_status" },
	{ 0x694074f5, "phy_drivers_unregister" },
	{ 0x9e79ec5b, "phy_drivers_register" },
	{ 0x51a10aa9, "genphy_update_link" },
	{ 0xf9a482f9, "msleep" },
	{ 0x16bec3bc, "genphy_setup_forced" },
	{ 0xca20a680, "genphy_restart_aneg" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xfb1184bd, "__genphy_config_aneg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa5cc937, "__phy_modify" },
	{ 0x2edeb0f, "phy_save_page" },
	{ 0x393a5c88, "phy_read_paged" },
	{ 0x3d265c04, "phy_modify_paged" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x663d1a01, "phy_ethtool_get_eee" },
	{ 0x17475388, "_dev_warn" },
	{ 0x225b7339, "phy_write_paged" },
	{ 0x765b90b6, "genphy_soft_reset" },
	{ 0x98c72135, "phy_modify" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0x930b0849, "devm_hwmon_device_register_with_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x754d539c, "strlen" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6be4e56c, "__mdiobus_write" },
	{ 0x18499f4f, "phy_restore_page" },
	{ 0xfa2657e9, "__mdiobus_read" },
	{ 0x298fb0fc, "phy_select_page" },
	{ 0xb91e023c, "genphy_suspend" },
	{ 0x836e6e7d, "genphy_resume" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000000101000001000011000110????");
MODULE_ALIAS("mdio:0000000101000001000011001001????");
MODULE_ALIAS("mdio:0000000101000001000011001100????");
MODULE_ALIAS("mdio:0000000101000001000011100001????");
MODULE_ALIAS("mdio:0000000101000001000011001011????");
MODULE_ALIAS("mdio:0000000101000001000011001101????");
MODULE_ALIAS("mdio:0000000101000001000011100101????");
MODULE_ALIAS("mdio:0000000101000001000011100011????");
MODULE_ALIAS("mdio:0000000101000001000011101001????");
MODULE_ALIAS("mdio:0000000101000001000011100100????");
MODULE_ALIAS("mdio:0000000101000001000011011101????");
MODULE_ALIAS("mdio:0000000101000001000011101011????");
MODULE_ALIAS("mdio:0000000101000001000011101010????");
MODULE_ALIAS("mdio:0000000101000001000011100110????");
MODULE_ALIAS("mdio:0000000101000001000011111001????");

MODULE_INFO(srcversion, "54286C52461C0C063D577BC");
