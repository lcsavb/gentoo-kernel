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
	{ 0x3a800736, "ieee80211_rx_irqsafe" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6465143, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xae775af2, "ieee80211_unregister_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x83a17f2f, "ieee80211_scan_completed" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x294dcfbe, "ieee80211_stop_queues" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf115de16, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa7c03748, "ieee80211_free_txskb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x378f702a, "ieee80211_report_low_ack" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3973c83b, "ieee80211_wake_queues" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xccdf5e5b, "ieee80211_proberesp_get" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x63a33536, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8686fcfa, "ieee80211_tx_status_irqsafe" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x6e17003, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf918003a, "ieee80211_start_tx_ba_session" },
	{ 0xedc03953, "iounmap" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xea830adb, "ieee80211_connection_loss" },
	{ 0x545a6758, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211");

MODULE_ALIAS("of:N*T*Cqcom,wcnss-wlan");
MODULE_ALIAS("of:N*T*Cqcom,wcnss-wlanC*");

MODULE_INFO(srcversion, "91A4E05449ECD4AB219AFBD");
