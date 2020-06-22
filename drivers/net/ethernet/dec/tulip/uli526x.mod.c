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
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xe7fbf033, "dev_trans_start" },
	{ 0x24d273d1, "add_timer" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xf163231, "netdev_info" },
	{ 0x6d495207, "register_netdev" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xc5850110, "printk" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x69acdf38, "memcpy" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B9d00005261sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005263sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD7CE755CF0444FBBC22349");
