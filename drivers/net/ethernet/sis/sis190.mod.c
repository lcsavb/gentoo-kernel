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
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5f05ffe8, "netdev_emerg" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x1a281859, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf163231, "netdev_info" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x6d495207, "register_netdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4790f3b0, "generic_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdbd53a71, "mii_nway_restart" },
	{ 0xdd76d963, "mii_ethtool_get_link_ksettings" },
	{ 0x446293a7, "mii_ethtool_set_link_ksettings" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00001039d00000190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000191sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "410B592D8FDA479DCB27BE4");
