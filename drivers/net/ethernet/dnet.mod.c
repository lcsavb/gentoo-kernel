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
	{ 0xd94c57bd, "phy_ethtool_set_link_ksettings" },
	{ 0x4058c914, "phy_ethtool_get_link_ksettings" },
	{ 0xea77672a, "ethtool_op_get_ts_info" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x29733ddc, "phy_attached_info" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x3bcb20c9, "phy_support_asym_pause" },
	{ 0xc9c6da8f, "phy_set_max_speed" },
	{ 0x8680c7c3, "phy_connect" },
	{ 0xd80eb779, "phy_find_first" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7bdbb85e, "mdiobus_alloc_size" },
	{ 0xccb4f3bd, "phy_register_fixup_for_uid" },
	{ 0x6d495207, "register_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0x2441e215, "phy_start_aneg" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xf3225e40, "phy_stop" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd409bb5d, "skb_tstamp_tx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x4e5efb33, "skb_clone_tx_timestamp" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x49dd3cf9, "phy_mii_ioctl" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc5850110, "printk" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x26eaaa97, "mdiobus_free" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");


MODULE_INFO(srcversion, "9125DB506D30BF89D51DE45");
