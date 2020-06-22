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
	{ 0x946cfd49, "param_ops_int" },
	{ 0xd94c57bd, "phy_ethtool_set_link_ksettings" },
	{ 0x4058c914, "phy_ethtool_get_link_ksettings" },
	{ 0xea77672a, "ethtool_op_get_ts_info" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xa7f0232e, "phy_ethtool_nway_reset" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xd80eb779, "phy_find_first" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x6d495207, "register_netdev" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0xc9c6da8f, "phy_set_max_speed" },
	{ 0xb54e9ad3, "phy_connect_direct" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7bdbb85e, "mdiobus_alloc_size" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2e6f9137, "dmam_alloc_attrs" },
	{ 0xc6dcbeba, "devm_ioremap_nocache" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0xd409bb5d, "skb_tstamp_tx" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x4e5efb33, "skb_clone_tx_timestamp" },
	{ 0x1a281859, "pv_ops" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd07a6947, "phy_print_status" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xf3225e40, "phy_stop" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xe484e35f, "ioread32" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x49dd3cf9, "phy_mii_ioctl" },
	{ 0x4efebf0d, "mdiobus_get_phy" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x26eaaa97, "mdiobus_free" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("of:N*T*Copencores,ethoc");
MODULE_ALIAS("of:N*T*Copencores,ethocC*");

MODULE_INFO(srcversion, "55EFBC70096EBFBAEF654C5");
