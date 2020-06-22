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
	{ 0x2a83ff05, "sdio_writeb" },
	{ 0x9303e35d, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x7f79c71c, "lbs_resume" },
	{ 0x757c0d3a, "sdio_writesb" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x19f204a7, "lbs_stop_card" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xfd6a5629, "netdev_alert" },
	{ 0x9c937eee, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bc34da2, "sdio_get_host_pm_caps" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbc8047d1, "lbs_start_card" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x12a1ca49, "lbs_queue_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9d18f7d6, "lbs_get_firmware_async" },
	{ 0x260608ec, "lbs_cmd_copyback" },
	{ 0x8a26ca50, "lbs_suspend" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1754d85f, "sdio_readsb" },
	{ 0xf9c42cdc, "sdio_unregister_driver" },
	{ 0x80fea394, "lbs_remove_card" },
	{ 0x696afc99, "sdio_f0_writeb" },
	{ 0x128d1bbd, "sdio_set_host_pm_flags" },
	{ 0x3a117b68, "lbs_process_rxed_packet" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcc580c56, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8920e4d3, "sdio_align_size" },
	{ 0x50bb222, "lbs_add_card" },
	{ 0xbba1bf59, "sdio_f0_readb" },
	{ 0x301c4ee3, "mmc_add_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa65fa7d, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x19338a90, "sdio_set_block_size" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0x96474462, "sdio_release_host" },
	{ 0xfc11f247, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "mmc_core,libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "574DD96A90F004DBC84B465");
