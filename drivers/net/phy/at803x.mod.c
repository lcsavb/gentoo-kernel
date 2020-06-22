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
	{ 0xb18ba5cb, "phy_resolve_aneg_pause" },
	{ 0x5de99942, "genphy_read_lpa" },
	{ 0x51a10aa9, "genphy_update_link" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x52d4def8, "mdio_device_reset" },
	{ 0x17475388, "_dev_warn" },
	{ 0x15c13da9, "genphy_aneg_done" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x98c72135, "phy_modify" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6eae8dea, "phy_write_mmd" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:000000000100110111010000011?0110");
MODULE_ALIAS("mdio:000000000100110111010000011?0100");
MODULE_ALIAS("mdio:000000000100110111010000011?0010");

MODULE_INFO(srcversion, "5D2B7989C0CCFABE8A09D1C");
