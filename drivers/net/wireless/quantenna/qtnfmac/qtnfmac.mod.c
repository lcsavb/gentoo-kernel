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
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x631a8ac6, "wiphy_free" },
	{ 0xebc0c847, "cfg80211_connect_done" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0xa6a6e38b, "regulatory_set_wiphy_regd" },
	{ 0x7f55a386, "cfg80211_radar_event" },
	{ 0x6abc84d2, "cfg80211_shutdown_all_interfaces" },
	{ 0x45cc952, "cfg80211_inform_bss_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6de7646f, "cfg80211_rx_mgmt" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x83fd15b4, "netif_tx_stop_all_queues" },
	{ 0x11089ac7, "_ctype" },
	{ 0x7adb4639, "cfg80211_get_bss" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xa36fd63d, "wiphy_unregister" },
	{ 0xffe34679, "cfg80211_del_sta_sinfo" },
	{ 0x59e104af, "ieee80211_get_channel" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa70c367e, "wiphy_apply_custom_regulatory" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x31c65904, "cfg80211_get_drvinfo" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xabe0a6c8, "cfg80211_check_combinations" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xe50cf823, "cfg80211_ch_switch_notify" },
	{ 0xaeedd606, "cfg80211_put_bss" },
	{ 0x97b32b8d, "wiphy_register" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa70ae6c5, "wiphy_new_nm" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0x54b1ba53, "cfg80211_disconnected" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0x8394aa47, "cfg80211_new_sta" },
	{ 0x6439af62, "cfg80211_chandef_valid" },
	{ 0x2eb83594, "cfg80211_external_auth_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3b6f9c9, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x8438157a, "cfg80211_cac_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x7b9bcae3, "cfg80211_scan_done" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6d771be, "device_set_wakeup_enable" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "0969E07A59E037687E4A014");
