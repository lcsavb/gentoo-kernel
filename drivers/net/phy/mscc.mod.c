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
	{ 0x15c13da9, "genphy_aneg_done" },
	{ 0x836e6e7d, "genphy_resume" },
	{ 0xb91e023c, "genphy_suspend" },
	{ 0x694074f5, "phy_drivers_unregister" },
	{ 0x9e79ec5b, "phy_drivers_register" },
	{ 0x98c72135, "phy_modify" },
	{ 0xca20a680, "genphy_restart_aneg" },
	{ 0xfb1184bd, "__genphy_config_aneg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x17475388, "_dev_warn" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x56dd42bc, "genphy_read_status" },
	{ 0x5792f848, "strlcpy" },
	{ 0x393a5c88, "phy_read_paged" },
	{ 0x765b90b6, "genphy_soft_reset" },
	{ 0x18499f4f, "phy_restore_page" },
	{ 0x298fb0fc, "phy_select_page" },
	{ 0x3d265c04, "phy_modify_paged" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xfa2657e9, "__mdiobus_read" },
	{ 0x6be4e56c, "__mdiobus_write" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000000000000111000001100111????");
MODULE_ALIAS("mdio:0000000000000111000001010110????");
MODULE_ALIAS("mdio:0000000000000111000001010111????");
MODULE_ALIAS("mdio:0000000000000111000001110110????");
MODULE_ALIAS("mdio:0000000000000111000001110111????");
MODULE_ALIAS("mdio:0000000000000111000001001010????");
MODULE_ALIAS("mdio:0000000000000111000001111100????");

MODULE_INFO(srcversion, "C045801CC83F31A52AECBCA");
