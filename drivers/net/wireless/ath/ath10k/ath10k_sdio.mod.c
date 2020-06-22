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
	{ 0x7ca9525b, "ath10k_core_unregister" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x991b8d55, "ath10k_core_register" },
	{ 0x757c0d3a, "sdio_writesb" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0xc73d2ff3, "mmc_hw_reset" },
	{ 0xc640f800, "mmc_wait_for_cmd" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3116b789, "ath10k_core_destroy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x359ecbd9, "sdio_writel" },
	{ 0x89369bdc, "ath10k_mac_tx_push_pending" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xef7234cd, "ath10k_core_create" },
	{ 0xcf0afa76, "sdio_readl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x1754d85f, "sdio_readsb" },
	{ 0xf9c42cdc, "sdio_unregister_driver" },
	{ 0xdd52c9c5, "ath10k_htc_process_trailer" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x6124203a, "ath10k_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xc0270a2c, "sdio_memcpy_toio" },
	{ 0xcff44039, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xb68bc4fd, "sdio_memcpy_fromio" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0x167a45a3, "ath10k_htc_notify_tx_completion" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x19338a90, "sdio_set_block_size" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0x96474462, "sdio_release_host" },
};

MODULE_INFO(depends, "ath10k_core,mmc_core");

MODULE_ALIAS("sdio:c*v0271d050A*");
MODULE_ALIAS("sdio:c*v0271d0701*");

MODULE_INFO(srcversion, "FAEFA81637757894B47B4C8");
