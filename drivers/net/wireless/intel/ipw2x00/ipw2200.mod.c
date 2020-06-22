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
	{ 0x161f57b, "iw_handler_get_thrspy" },
	{ 0xdf7e6e03, "iw_handler_set_thrspy" },
	{ 0x33f3fd6a, "iw_handler_get_spy" },
	{ 0xf1437909, "iw_handler_set_spy" },
	{ 0xae23b836, "cfg80211_wext_giwname" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x83607cc3, "libipw_xmit" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x519ddc40, "driver_remove_file" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x19c8fe81, "driver_create_file" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x97b32b8d, "wiphy_register" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x98d14e79, "libipw_set_geo" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x85fe6be, "libipw_networks_age" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x8dd80ad2, "dma_pool_create" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xfa8812cc, "libipw_rx_mgt" },
	{ 0x1ae4f667, "libipw_rx" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xa36fd63d, "wiphy_unregister" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x449e8a95, "libipw_txb_free" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xc2402928, "libipw_freq_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4acda47b, "libipw_wx_set_encode" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9923a01b, "wireless_send_event" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x393212b0, "libipw_wx_get_scan" },
	{ 0x926f949c, "libipw_wx_get_encode" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7c5e8f04, "libipw_wx_set_encodeext" },
	{ 0x376dbdce, "libipw_wx_get_encodeext" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9158489, "libipw_channel_to_index" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x458ecb7, "wiphy_rfkill_set_hw_state" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9166fada, "strncpy" },
	{ 0x349cba85, "strchr" },
	{ 0x3dbe42db, "libipw_is_valid_channel" },
	{ 0x122abbc8, "libipw_get_geo" },
	{ 0x754d539c, "strlen" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xb84c9cc6, "free_libipw" },
	{ 0x6d495207, "register_netdev" },
	{ 0xcd2fd7e4, "alloc_libipw" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11089ac7, "_ctype" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc5850110, "printk" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211,libipw");

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002701bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002702bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002711bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002712bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002721bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002722bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002731bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002732bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv0000103Csd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002742bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002751bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002752bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002753bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002754bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002761bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002762bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004224sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "60237B8495EFF30A2F7123C");
