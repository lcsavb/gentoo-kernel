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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xea77672a, "ethtool_op_get_ts_info" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0x4e5efb33, "skb_clone_tx_timestamp" },
	{ 0xc6dcbeba, "devm_ioremap_nocache" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0xa7f0232e, "phy_ethtool_nway_reset" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9aa3a0e1, "devm_mdiobus_alloc_size" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xd07a6947, "phy_print_status" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x17475388, "_dev_warn" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6d495207, "register_netdev" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x388f1461, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4058c914, "phy_ethtool_get_link_ksettings" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x9a0bd081, "skb_defer_rx_timestamp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xd94c57bd, "phy_ethtool_set_link_ksettings" },
	{ 0x8680c7c3, "phy_connect" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x49dd3cf9, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd409bb5d, "skb_tstamp_tx" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-1.01.b");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-1.01.bC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.02.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.02.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.03.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.03.aC*");

MODULE_INFO(srcversion, "0C3619BCEB8D8BBBAB44C27");
