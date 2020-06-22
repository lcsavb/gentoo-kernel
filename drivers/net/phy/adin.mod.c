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
	{ 0xf9a482f9, "msleep" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x28deed7a, "phy_modify_mmd" },
	{ 0x6eae8dea, "phy_write_mmd" },
	{ 0xfb1184bd, "__genphy_config_aneg" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xfa2657e9, "__mdiobus_read" },
	{ 0x6be4e56c, "__mdiobus_write" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x2f12efa3, "phy_read_mmd" },
	{ 0x98c72135, "phy_modify" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x56dd42bc, "genphy_read_status" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000001010000011101111000010????");
MODULE_ALIAS("mdio:0000001010000011101111000011????");

MODULE_INFO(srcversion, "5AE159ED110A57944C3EEE0");
