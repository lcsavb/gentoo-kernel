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
	{ 0x129334ae, "sfp_parse_support" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0x6e8faede, "sfp_register_upstream" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x538d073d, "phy_duplex_to_str" },
	{ 0xf3225e40, "phy_stop" },
	{ 0x71545499, "phy_attach_direct" },
	{ 0xbe7c83c9, "fwnode_handle_put" },
	{ 0x18e4f8aa, "swphy_read_reg" },
	{ 0xc728c7c9, "phy_ethtool_ksettings_set" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x3ecfdbda, "phy_ethtool_ksettings_get" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x2c07a031, "phy_ethtool_get_wol" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5db40570, "fwnode_property_present" },
	{ 0x70aff7e1, "fwnode_property_read_string" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x663d1a01, "phy_ethtool_get_eee" },
	{ 0x93bd2599, "phy_set_asym_pause" },
	{ 0xa8e580d, "fwnode_get_named_child_node" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x9130787b, "sfp_unregister_upstream" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x608bab1f, "sfp_select_interface" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xccf52bc9, "sfp_upstream_start" },
	{ 0x634ec2bc, "fwnode_get_named_gpiod" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0x8a62b81b, "sfp_upstream_stop" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x85a3113a, "netdev_printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6ee08218, "phy_detach" },
	{ 0xb14ebf9d, "phy_init_eee" },
	{ 0x3880b7ff, "phy_request_interrupt" },
	{ 0x94e7f5f2, "fwnode_property_read_u32_array" },
	{ 0x6209f49, "phy_lookup_setting" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0x5a052b3c, "phy_get_eee_err" },
	{ 0xe4b818c3, "phy_speed_to_str" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4031b7f, "sfp_parse_port" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xc2002f7c, "fwnode_property_get_reference_args" },
	{ 0x76f1fbe7, "phy_ethtool_set_wol" },
	{ 0x37a0cba, "kfree" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0xe4ab1a5e, "phy_ethtool_set_eee" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x49dd3cf9, "phy_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6adf9e76, "gpiod_put" },
	{ 0x21f402d9, "phy_restart_aneg" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "libphy");


MODULE_INFO(srcversion, "69F629E54E0E0D9525C6F23");
