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
	{ 0xf9a482f9, "msleep" },
	{ 0x2f12efa3, "phy_read_mmd" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9e79ec5b, "phy_drivers_register" },
	{ 0xbea5972, "genphy_c45_pma_setup_forced" },
	{ 0xdd64e639, "strscpy" },
	{ 0x930b0849, "devm_hwmon_device_register_with_info" },
	{ 0x17475388, "_dev_warn" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf1deeba8, "phy_modify_mmd_changed" },
	{ 0x28deed7a, "phy_modify_mmd" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x40fc04fb, "genphy_c45_check_and_restart_aneg" },
	{ 0xa886fd0, "devm_kstrdup" },
	{ 0x694074f5, "phy_drivers_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x6eae8dea, "phy_write_mmd" },
	{ 0x366db465, "genphy_c45_an_config_aneg" },
	{ 0xdbca7a48, "genphy_c45_read_status" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc9c6da8f, "phy_set_max_speed" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000001110100001101101000100????");
MODULE_ALIAS("mdio:0000001110100001101101000110????");
MODULE_ALIAS("mdio:0000001110100001101101001010????");
MODULE_ALIAS("mdio:0000001110100001101101001101????");
MODULE_ALIAS("mdio:0000001110100001101101001110????");
MODULE_ALIAS("mdio:0000001110100001101101011100????");
MODULE_ALIAS("mdio:0000001110100001101101001011????");

MODULE_INFO(srcversion, "924ECAA489B0569CEE6662E");
