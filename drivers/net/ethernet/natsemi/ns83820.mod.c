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
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe7fbf033, "dev_trans_start" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x17475388, "_dev_warn" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x1000e51, "schedule" },
	{ 0xc9a5b82d, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc5850110, "printk" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000100Bd00000022sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "397AA16BA43FAC24701353D");
