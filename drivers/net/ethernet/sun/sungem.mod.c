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
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x40f4037f, "sungem_phy_probe" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xf163231, "netdev_info" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6d495207, "register_netdev" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x31a17693, "pci_unmap_rom" },
	{ 0x39f24fde, "pci_map_rom" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc5850110, "printk" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sungem_phy");

MODULE_ALIAS("pci:v0000108Ed00002BADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Ed00001101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd0000006Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "780951E1574574D6D82E063");
