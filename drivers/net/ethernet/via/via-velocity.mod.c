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
	{ 0xece85da4, "param_array_ops" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0xb0e602eb, "memmove" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x1a281859, "pv_ops" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x9294368c, "_dev_notice" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6d495207, "register_netdev" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x98001cfc, "init_net" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "crc-ccitt");

MODULE_ALIAS("of:N*T*Cvia,velocity-vt6110");
MODULE_ALIAS("of:N*T*Cvia,velocity-vt6110C*");
MODULE_ALIAS("pci:v00001106d00003119sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F545FF7EA5B29EEEA71FF92");
