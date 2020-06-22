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
	{ 0x59f0c2a3, "genphy_c45_read_mdix" },
	{ 0x661a42e0, "genphy_c45_read_pma" },
	{ 0xd9f4bc16, "phy_resolve_aneg_linkmode" },
	{ 0x661c9afa, "genphy_c45_read_lpa" },
	{ 0xa111f9ae, "genphy_c45_read_link" },
	{ 0x17475388, "_dev_warn" },
	{ 0x930b0849, "devm_hwmon_device_register_with_info" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x11089ac7, "_ctype" },
	{ 0xa886fd0, "devm_kstrdup" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf4738d8a, "genphy_c45_pma_read_abilities" },
	{ 0xbea5972, "genphy_c45_pma_setup_forced" },
	{ 0x40fc04fb, "genphy_c45_check_and_restart_aneg" },
	{ 0xf1deeba8, "phy_modify_mmd_changed" },
	{ 0x366db465, "genphy_c45_an_config_aneg" },
	{ 0x6eae8dea, "phy_write_mmd" },
	{ 0x28deed7a, "phy_modify_mmd" },
	{ 0x98f32486, "genphy_c45_aneg_done" },
	{ 0x2f12efa3, "phy_read_mmd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000000000101011000010011010????");
MODULE_ALIAS("mdio:0000000000101011000010011011????");

MODULE_INFO(srcversion, "FC53AFC51E4CBF536EB9A87");
