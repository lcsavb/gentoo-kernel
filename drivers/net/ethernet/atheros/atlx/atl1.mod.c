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
	{ 0xece85da4, "param_array_ops" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xcf60d427, "___pskb_trim" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0xf5ff6263, "pci_wake_from_d3" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9294368c, "_dev_notice" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6d495207, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x17475388, "_dev_warn" },
	{ 0x848d372e, "iowrite8" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5534d64, "ioread16" },
	{ 0x4790f3b0, "generic_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6d771be, "device_set_wakeup_enable" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe484e35f, "ioread32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00001969d00001048sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A4103C1DDDB71D63A351AC5");
