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
	{ 0x765b90b6, "genphy_soft_reset" },
	{ 0x61b02a9b, "bcm_phy_get_strings" },
	{ 0x694074f5, "phy_drivers_unregister" },
	{ 0x9e79ec5b, "phy_drivers_register" },
	{ 0xfb1184bd, "__genphy_config_aneg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x28c0ea48, "bcm_phy_enable_apd" },
	{ 0x5cc517da, "bcm_phy_r_rc_cal_reset" },
	{ 0x27e8e1df, "bcm_phy_write_misc" },
	{ 0xdf798e2, "bcm_phy_28nm_a0b0_afe_config_init" },
	{ 0x3ed70d3e, "bcm_phy_get_sset_count" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf8345371, "bcm_phy_get_stats" },
	{ 0x3f5a82d5, "bcm_phy_downshift_get" },
	{ 0xca20a680, "genphy_restart_aneg" },
	{ 0xc586259e, "bcm_phy_set_eee" },
	{ 0x75c52ef5, "bcm_phy_downshift_set" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy,bcm-phy-lib");

MODULE_ALIAS("mdio:1010111000000010010100101000????");
MODULE_ALIAS("mdio:1010111000000010010100010010????");
MODULE_ALIAS("mdio:1010111000000010010100011001????");
MODULE_ALIAS("mdio:1010111000000010010100001001????");
MODULE_ALIAS("mdio:1010111000000010010100111011????");
MODULE_ALIAS("mdio:1010111000000010010100011010????");
MODULE_ALIAS("mdio:1010111000000010010100100110????");
MODULE_ALIAS("mdio:0110000000001101100001001001????");
MODULE_ALIAS("mdio:0110000000001101100001100101????");
MODULE_ALIAS("mdio:0110000000001101100001001011????");
MODULE_ALIAS("mdio:0110000000001101100001101011????");
MODULE_ALIAS("mdio:0110000000001101100001110011????");
MODULE_ALIAS("mdio:1010111000000010010100101110????");
MODULE_ALIAS("mdio:0110000000001101100001001000????");
MODULE_ALIAS("mdio:0110000000001101100001110101????");
MODULE_ALIAS("mdio:0110000000001101100001010001????");

MODULE_INFO(srcversion, "B5D6F2866B0E570DECC60D2");
