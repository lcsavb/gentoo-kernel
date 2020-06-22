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
	{ 0xdf7e6e03, "iw_handler_set_thrspy" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x631a8ac6, "wiphy_free" },
	{ 0x9c6098c5, "crypto_alloc_shash" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x45cc952, "cfg80211_inform_bss_data" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xd3dbab32, "cfg80211_wext_siwscan" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x8a663639, "cfg80211_wext_giwretry" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xb3ca7259, "crypto_shash_final" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x1a281859, "pv_ops" },
	{ 0xb7d82654, "cfg80211_wext_siwmode" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x6ab0d8d7, "wireless_spy_update" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbc704ff, "crypto_shash_update" },
	{ 0x33f3fd6a, "iw_handler_get_spy" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x6d495207, "register_netdev" },
	{ 0x9923a01b, "wireless_send_event" },
	{ 0x59e104af, "ieee80211_get_channel" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x782ed25, "cfg80211_wext_giwfrag" },
	{ 0x1f5917ce, "crypto_shash_setkey" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xc5a801c3, "cfg80211_wext_siwrts" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xaeedd606, "cfg80211_put_bss" },
	{ 0x97b32b8d, "wiphy_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x161f57b, "iw_handler_get_thrspy" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xa70ae6c5, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0xa5d77e7d, "cfg80211_wext_giwrange" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x33d6462c, "cfg80211_wext_giwmode" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xf1437909, "iw_handler_set_spy" },
	{ 0x37a0cba, "kfree" },
	{ 0xae23b836, "cfg80211_wext_giwname" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4fbd0b40, "cfg80211_wext_giwscan" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0xc5534d64, "ioread16" },
	{ 0x4f1de6b7, "cfg80211_wext_giwrts" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5060ede7, "cfg80211_wext_siwfrag" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x7b9bcae3, "cfg80211_scan_done" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "A3005614B229A4D8DB60F5D");
