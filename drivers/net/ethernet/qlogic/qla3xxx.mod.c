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
	{ 0xdcf6a8c, "skb_push" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc9938aa0, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6d495207, "register_netdev" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xc5850110, "printk" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x1a281859, "pv_ops" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x85a3113a, "netdev_printk" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf163231, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001077d00003022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00003032sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AEDA5DCC32ADC0554599577");
