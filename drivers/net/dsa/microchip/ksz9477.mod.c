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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xf146d423, "ksz_port_bridge_join" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x7cc52360, "ksz_port_vlan_prepare" },
	{ 0x619ba4f6, "ksz_get_ethtool_stats" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xaa6bdcf2, "ksz_init_mib_timer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xd18a6980, "ksz_switch_register" },
	{ 0xe909ba46, "ksz_port_bridge_leave" },
	{ 0xfb578fc5, "memset" },
	{ 0x60742e10, "phy_remove_link_mode" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd7909f6b, "ksz_update_port_member" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x641035c, "ksz_adjust_link" },
	{ 0xcb3e76e, "ksz_port_mdb_prepare" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x43929f, "ksz_port_fast_age" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb1792b5a, "ksz_disable_port" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x44cd8d7a, "ksz_enable_port" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xd6d90542, "ksz_sset_count" },
};

MODULE_INFO(depends, "ksz_common,libphy");


MODULE_INFO(srcversion, "A773B2936203223CB23DEE0");
