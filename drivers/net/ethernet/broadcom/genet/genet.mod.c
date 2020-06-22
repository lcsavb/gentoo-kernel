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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xea77672a, "ethtool_op_get_ts_info" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0x4e5efb33, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf3225e40, "phy_stop" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xf22af22c, "__napi_schedule_irqoff" },
	{ 0xb60641f6, "phy_resume" },
	{ 0x5f122728, "netdev_boot_setup_check" },
	{ 0xc728c7c9, "phy_ethtool_ksettings_set" },
	{ 0x2746d8ce, "phy_init_hw" },
	{ 0x3ecfdbda, "phy_ethtool_ksettings_get" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8ac3334b, "net_dim_get_def_rx_moderation" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xa7f0232e, "phy_ethtool_nway_reset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xfb1184bd, "__genphy_config_aneg" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0x1a281859, "pv_ops" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x663d1a01, "phy_ethtool_get_eee" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd07a6947, "phy_print_status" },
	{ 0x2c07b1d8, "netif_schedule_queue" },
	{ 0x68b9653f, "phy_mac_interrupt" },
	{ 0x17475388, "_dev_warn" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0x6d495207, "register_netdev" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x601b849f, "netif_set_real_num_rx_queues" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xe0476761, "netif_set_real_num_tx_queues" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x1da5f82d, "fixed_phy_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x850f1b7b, "fixed_phy_set_link_update" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xc34130bb, "phy_suspend" },
	{ 0xe0c00f84, "softnet_data" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x22ebd899, "platform_device_add_resources" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb14ebf9d, "phy_init_eee" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7f52071a, "net_dim" },
	{ 0xb54e9ad3, "phy_connect_direct" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb31a754a, "pm_wakeup_dev_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x74a28b80, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xe4ab1a5e, "phy_ethtool_set_eee" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x13c97350, "phy_attach" },
	{ 0x49dd3cf9, "phy_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xd409bb5d, "skb_tstamp_tx" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x94fb2baf, "device_set_wakeup_capable" },
	{ 0xb825523f, "devm_platform_ioremap_resource" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0x6d771be, "device_set_wakeup_enable" },
	{ 0xc9c6da8f, "phy_set_max_speed" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x2de673f2, "netdev_crit" },
};

MODULE_INFO(depends, "libphy,fixed_phy");

MODULE_ALIAS("of:N*T*Cbrcm,genet-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5C*");

MODULE_INFO(srcversion, "8BBB3E8C9B10C5549405FB8");
