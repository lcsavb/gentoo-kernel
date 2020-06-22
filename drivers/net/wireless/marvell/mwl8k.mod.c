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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x1e1be212, "device_release_driver" },
	{ 0x9b3e27d6, "ieee80211_register_hw" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x4f92d4ec, "ieee80211_restart_hw" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf918003a, "ieee80211_start_tx_ba_session" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x17475388, "_dev_warn" },
	{ 0x63a33536, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x545a6758, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x2e7233d2, "ieee80211_stop_tx_ba_session" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6465143, "ieee80211_beacon_get_tim" },
	{ 0x6e17003, "ieee80211_find_sta" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xf115de16, "ieee80211_alloc_hw_nm" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0x3a800736, "ieee80211_rx_irqsafe" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xae775af2, "ieee80211_unregister_hw" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3e773a12, "ieee80211_find_sta_by_ifaddr" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x8686fcfa, "ieee80211_tx_status_irqsafe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9294368c, "_dev_notice" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x294dcfbe, "ieee80211_stop_queues" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x712e52f7, "current_task" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x1402737e, "ieee80211_queue_work" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x29361773, "complete" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xb0e602eb, "memmove" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x3973c83b, "ieee80211_wake_queues" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1a281859, "pv_ops" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("pci:v000011ABd00002A0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B36sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0D71873E88E508A648C88DC");
