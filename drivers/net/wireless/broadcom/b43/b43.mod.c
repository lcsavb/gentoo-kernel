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
	{ 0x1a19fb3f, "ieee80211_rx_napi" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbc7c272d, "ssb_dma_translation" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf1e32323, "bcma_pmu_spuravoid_pllupdate" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x1402737e, "ieee80211_queue_work" },
	{ 0xbf98ac81, "bcma_host_pci_down" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0xc6892522, "ieee80211_rts_get" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfbd9cc6c, "ssb_commit_settings" },
	{ 0xd6465143, "ieee80211_beacon_get_tim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xae775af2, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc0c1357f, "ssb_bus_powerup" },
	{ 0xdda66702, "bcma_host_pci_up" },
	{ 0x1c4dc083, "ssb_bus_sdiobus_register" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x3923683e, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x682b89d, "__ieee80211_get_assoc_led_name" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc7ce6f4a, "__ssb_driver_register" },
	{ 0x3e38e6a2, "param_ops_string" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x2fafc4ce, "ieee80211_stop_queue" },
	{ 0xfe9d769d, "ieee80211_tx_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6e9c34ae, "ssb_driver_unregister" },
	{ 0x5896a2c2, "ssb_chipco_gpio_control" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7e431c15, "cordic_calc_iq" },
	{ 0xf115de16, "ieee80211_alloc_hw_nm" },
	{ 0x8ddee905, "bcma_core_dma_translation" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0xa7c03748, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3973c83b, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xddb6fa23, "ssb_device_enable" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7e9e2835, "bcma_core_set_clockmode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x580fb3df, "__bcma_driver_register" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x76dd4be3, "ieee80211_ctstoself_get" },
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf0daa596, "ieee80211_queue_delayed_work" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xcc877e1c, "bcma_host_pci_irq_ctl" },
	{ 0xf9c42cdc, "sdio_unregister_driver" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x55e71cb5, "bcma_chipco_gpio_control" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8a9cf674, "__ieee80211_get_rx_led_name" },
	{ 0x48eeb12b, "bcma_core_is_enabled" },
	{ 0x295ea278, "ssb_pmu_set_ldo_voltage" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf5b34baf, "ssb_device_disable" },
	{ 0xcb384b56, "bcma_core_enable" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x458ecb7, "wiphy_rfkill_set_hw_state" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x30d9558c, "bcma_driver_unregister" },
	{ 0xb39b3bb6, "bcma_core_pll_ctl" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x8289d0e4, "__ieee80211_get_tx_led_name" },
	{ 0xdf7ecadc, "ssb_set_devtypedata" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaf49195e, "ieee80211_wake_queue" },
	{ 0x510efc26, "ieee80211_generic_frame_duration" },
	{ 0x34cb9cd8, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xefbb8646, "ssb_bus_unregister" },
	{ 0x9b3e27d6, "ieee80211_register_hw" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0xcac91cfa, "ssb_bus_may_powerdown" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0xd099e53, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0x48940221, "ssb_pmu_set_ldo_paref" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb0fabf16, "ssb_device_is_enabled" },
	{ 0x666d7a1, "bcma_core_disable" },
	{ 0x19338a90, "sdio_set_block_size" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x60651444, "ssb_pmu_spuravoid_pllupdate" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x4b668bbe, "ieee80211_get_tkip_p1k_iv" },
	{ 0xd349171, "ieee80211_get_response_rate" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x96474462, "sdio_release_host" },
};

MODULE_INFO(depends, "mac80211,ssb,bcma,mmc_core,cfg80211,cordic");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "5DFBAE6577E0BC658A2A92A");
