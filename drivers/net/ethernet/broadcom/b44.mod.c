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
	{ 0x6e9c34ae, "ssb_driver_unregister" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xc7ce6f4a, "__ssb_driver_register" },
	{ 0xda472e62, "ssb_pcihost_register" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x2c07b1d8, "netif_schedule_queue" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xec668a41, "__napi_alloc_skb" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc728c7c9, "phy_ethtool_ksettings_set" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xf3225e40, "phy_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x4790f3b0, "generic_mii_ioctl" },
	{ 0x49dd3cf9, "phy_mii_ioctl" },
	{ 0x6d771be, "device_set_wakeup_enable" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xc5850110, "printk" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x94fb2baf, "device_set_wakeup_capable" },
	{ 0x29733ddc, "phy_attached_info" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x8680c7c3, "phy_connect" },
	{ 0xea1e2ca7, "mdiobus_is_registered_device" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7bdbb85e, "mdiobus_alloc_size" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x6d495207, "register_netdev" },
	{ 0xbc7c272d, "ssb_dma_translation" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xc0c1357f, "ssb_bus_powerup" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x26eaaa97, "mdiobus_free" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0xcac91cfa, "ssb_bus_may_powerdown" },
	{ 0xf5b34baf, "ssb_device_disable" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x842a2aa6, "ssb_clockspeed" },
	{ 0xd099e53, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0xddb6fa23, "ssb_device_enable" },
	{ 0xb0fabf16, "ssb_device_is_enabled" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd07a6947, "phy_print_status" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x3ecfdbda, "phy_ethtool_ksettings_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xf163231, "netdev_info" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1a281859, "pv_ops" },
};

MODULE_INFO(depends, "ssb,libphy,mii");

MODULE_ALIAS("ssb:v4243id0806rev*");
MODULE_ALIAS("pci:v000014E4d00004401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004402sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8DA5A44EB55ECC69FAACB0A");
