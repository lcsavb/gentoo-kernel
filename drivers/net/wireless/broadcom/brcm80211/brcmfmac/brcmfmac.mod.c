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
	{ 0x2a83ff05, "sdio_writeb" },
	{ 0x9303e35d, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x631a8ac6, "wiphy_free" },
	{ 0x7410aba2, "strreplace" },
	{ 0xebc0c847, "cfg80211_connect_done" },
	{ 0x349cba85, "strchr" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x1e1be212, "device_release_driver" },
	{ 0xea124bd1, "gcd" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x45cc952, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x79652523, "send_sig" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x83e3186, "cfg80211_report_wowlan_wakeup" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x4b0958a6, "sdio_retune_release" },
	{ 0x4947a574, "brcmu_pkt_buf_get_skb" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6de7646f, "cfg80211_rx_mgmt" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc310b981, "strnstr" },
	{ 0xde071c4e, "driver_for_each_device" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb18f632d, "brcmu_pktq_pdeq_tail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa571ade0, "__platform_driver_probe" },
	{ 0x999e8297, "vfree" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x7e313939, "brcmu_pktq_penq" },
	{ 0x6abbb3c5, "pci_pme_capable" },
	{ 0xce743a65, "cfg80211_unregister_wdev" },
	{ 0xd7479180, "brcmu_pktq_mdeq" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bc34da2, "sdio_get_host_pm_caps" },
	{ 0xc3f01f39, "skb_unlink" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6eecf0d3, "cfg80211_mgmt_tx_status" },
	{ 0x3e38e6a2, "param_ops_string" },
	{ 0xfd94814e, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x34fdebbb, "mmc_wait_for_req" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x359ecbd9, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x77da5382, "cfg80211_vendor_cmd_reply" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfc511f0e, "brcmu_pktq_pdeq_match" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6e42a974, "netif_rx_ni" },
	{ 0xf10de535, "ioread8" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xa36fd63d, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x6d495207, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5ce5e880, "mmc_set_data_timeout" },
	{ 0xcf0afa76, "sdio_readl" },
	{ 0xffe34679, "cfg80211_del_sta_sinfo" },
	{ 0x59e104af, "ieee80211_get_channel" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x4df27723, "brcmu_pktq_peek_tail" },
	{ 0x77804e1e, "brcmu_pktq_flush" },
	{ 0x1a99c63e, "sdio_retune_crc_enable" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd71f451a, "cfg80211_michael_mic_failure" },
	{ 0xa70c367e, "wiphy_apply_custom_regulatory" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x6a683da4, "simple_open" },
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0xf99bd01f, "cfg80211_ibss_joined" },
	{ 0x989d039e, "device_wakeup_enable" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1754d85f, "sdio_readsb" },
	{ 0xf9c42cdc, "sdio_unregister_driver" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x696afc99, "sdio_f0_writeb" },
	{ 0x128d1bbd, "sdio_set_host_pm_flags" },
	{ 0xabe0a6c8, "cfg80211_check_combinations" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x9f984513, "strrchr" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8e4fc03d, "cfg80211_roamed" },
	{ 0xaeedd606, "cfg80211_put_bss" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1580ec, "__cfg80211_alloc_reply_skb" },
	{ 0x97b32b8d, "wiphy_register" },
	{ 0x1c1ba081, "cfg80211_crit_proto_stopped" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x895edf32, "cfg80211_classify8021d" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x848d372e, "iowrite8" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x5db5d96c, "cfg80211_ready_on_channel" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xa70ae6c5, "wiphy_new_nm" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0xbba1bf59, "sdio_f0_readb" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0x54b1ba53, "cfg80211_disconnected" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0x8394aa47, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc0270a2c, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x88da20c7, "brcmu_pktq_penq_head" },
	{ 0x1dc84f10, "brcmu_pktq_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xc5534d64, "ioread16" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x60f630e2, "cfg80211_remain_on_channel_expired" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xb68bc4fd, "sdio_memcpy_fromio" },
	{ 0x79abfb7, "cfg80211_sched_scan_stopped" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x73cd3bb6, "firmware_request_nowarn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7b9bcae3, "cfg80211_scan_done" },
	{ 0x6e2cef76, "sdio_retune_crc_disable" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3943470c, "brcmu_pkt_buf_free_skb" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x19338a90, "sdio_set_block_size" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x6d771be, "device_set_wakeup_enable" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x96474462, "sdio_release_host" },
	{ 0x8c7c0c2c, "sdio_retune_hold_now" },
	{ 0x5b31cf38, "cfg80211_sched_scan_results" },
	{ 0xfe7b4a16, "brcmu_pktq_mlen" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "mmc_core,brcmutil,cfg80211");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("pci:v000014E4d000043A3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004355sv000014E4sd00004355bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004354sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043ECsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043E9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043EFsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000AA52sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004365sv000014E4sd00004365bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C4sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C5sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000440Dsv*sd*bc02sc80i*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "27E3AF2BB2A8C23DEC1AE7B");
