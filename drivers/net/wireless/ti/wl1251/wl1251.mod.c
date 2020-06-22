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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x1a19fb3f, "ieee80211_rx_napi" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1402737e, "ieee80211_queue_work" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd8d14fb, "ieee80211_cqm_rssi_notify" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd6465143, "ieee80211_beacon_get_tim" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xae775af2, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x83a17f2f, "ieee80211_scan_completed" },
	{ 0x999e8297, "vfree" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x294dcfbe, "ieee80211_stop_queues" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xfe9d769d, "ieee80211_tx_status" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf115de16, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x3973c83b, "ieee80211_wake_queues" },
	{ 0x9166fada, "strncpy" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x6a683da4, "simple_open" },
	{ 0xf0daa596, "ieee80211_queue_delayed_work" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdfd8dfc6, "ieee80211_get_hdrlen_from_skb" },
	{ 0x9b3e27d6, "ieee80211_register_hw" },
	{ 0xd436267, "ieee80211_pspoll_get" },
	{ 0x2c8c2ae2, "ieee80211_nullfunc_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xa724d59e, "ieee80211_beacon_loss" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x34946f91, "ieee80211_probereq_get" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xa4d6f89a, "release_firmware" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "56419AE77A3E5C7ADAC28FA");
