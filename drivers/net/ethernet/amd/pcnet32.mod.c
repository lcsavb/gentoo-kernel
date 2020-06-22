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
	{ 0xece85da4, "param_array_ops" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x8d8be174, "mii_ethtool_sset" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x446293a7, "mii_ethtool_set_link_ksettings" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x85bd1608, "__request_region" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x6d495207, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4790f3b0, "generic_mii_ioctl" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdbd53a71, "mii_nway_restart" },
	{ 0xdd76d963, "mii_ethtool_get_link_ksettings" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xf163231, "netdev_info" },
	{ 0x9cf3544, "mii_ethtool_gset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x3006f0bf, "mii_link_ok" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x85a3113a, "netdev_printk" },
	{ 0x1a281859, "pv_ops" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00001022d00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00002000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00002000sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "7CAB72D2511A8CBB44A27B5");
