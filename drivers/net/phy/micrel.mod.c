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
	{ 0x7dbee0e, "genphy_write_mmd_unsupported" },
	{ 0x43d909ff, "genphy_read_mmd_unsupported" },
	{ 0x694074f5, "phy_drivers_unregister" },
	{ 0x9e79ec5b, "phy_drivers_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0x836e6e7d, "genphy_resume" },
	{ 0xfb1184bd, "__genphy_config_aneg" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2746d8ce, "phy_init_hw" },
	{ 0x56dd42bc, "genphy_read_status" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x98c72135, "phy_modify" },
	{ 0x878a7474, "genphy_read_abilities" },
	{ 0xca20a680, "genphy_restart_aneg" },
	{ 0x2f12efa3, "phy_read_mmd" },
	{ 0x6eae8dea, "phy_write_mmd" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0xb91e023c, "genphy_suspend" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:????????????0010000101100001000?");
MODULE_ALIAS("mdio:????????00100010000101100010????");
MODULE_ALIAS("mdio:????????00100010000101100100????");
MODULE_ALIAS("mdio:????????0010001000010110000110??");
MODULE_ALIAS("mdio:????????00100010000101110010????");
MODULE_ALIAS("mdio:????????001000100001010101010101");
MODULE_ALIAS("mdio:????????001000100001010101010110");
MODULE_ALIAS("mdio:????????00100010000101010001????");
MODULE_ALIAS("mdio:????????00100010000101010101????");
MODULE_ALIAS("mdio:????????00100010000101010111????");
MODULE_ALIAS("mdio:????????00100010000101010110????");
MODULE_ALIAS("mdio:????????00001110011100100011????");
MODULE_ALIAS("mdio:????????00100010000101000011????");

MODULE_INFO(srcversion, "9F371977E644BB5DDD10891");
