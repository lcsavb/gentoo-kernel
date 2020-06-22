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
	{ 0x1159a640, "param_ops_uint" },
	{ 0xd94c57bd, "phy_ethtool_set_link_ksettings" },
	{ 0x4058c914, "phy_ethtool_get_link_ksettings" },
	{ 0xea77672a, "ethtool_op_get_ts_info" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xa7f0232e, "phy_ethtool_nway_reset" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0x29733ddc, "phy_attached_info" },
	{ 0x3bcb20c9, "phy_support_asym_pause" },
	{ 0xc9c6da8f, "phy_set_max_speed" },
	{ 0x8680c7c3, "phy_connect" },
	{ 0x4efebf0d, "mdiobus_get_phy" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7bdbb85e, "mdiobus_alloc_size" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x26eaaa97, "mdiobus_free" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0xf3225e40, "phy_stop" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xd409bb5d, "skb_tstamp_tx" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x4e5efb33, "skb_clone_tx_timestamp" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x6d495207, "register_netdev" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x49dd3cf9, "phy_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf163231, "netdev_info" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("pci:v00001055d0000E420sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "63E0F0F26AD6F1F2A4FAB10");
