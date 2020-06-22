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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf163231, "netdev_info" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xc5850110, "printk" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xce51ad6c, "skb_checksum_help" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xec668a41, "__napi_alloc_skb" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "mdio");

MODULE_ALIAS("pci:v00001425d00000008sv*sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000008sv*sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000007sv*sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000000Asv*sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000000Bsv*sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000000Esv*sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000010sv*sd00000001bc*sc*i*");

MODULE_INFO(srcversion, "80C7326A47DF5F1435AEB2D");
