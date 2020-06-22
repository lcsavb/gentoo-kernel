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
	{ 0x8a198113, "ath6kl_core_destroy" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc62cc3e0, "ath6kl_hif_intr_bh_handler" },
	{ 0xeb662c5d, "ath6kl_core_cleanup" },
	{ 0x91cfb84a, "ath6kl_hif_rw_comp_handler" },
	{ 0x9584185d, "ath6kl_dbg" },
	{ 0x9aaad60e, "ath6kl_core_create" },
	{ 0x757c0d3a, "sdio_writesb" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0xc640f800, "mmc_wait_for_cmd" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bc34da2, "sdio_get_host_pm_caps" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x34fdebbb, "mmc_wait_for_req" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x8eedc1e0, "ath6kl_dbg_dump" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ce5e880, "mmc_set_data_timeout" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x99baaf9e, "ath6kl_cfg80211_suspend" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1754d85f, "sdio_readsb" },
	{ 0xf9c42cdc, "sdio_unregister_driver" },
	{ 0x128d1bbd, "sdio_set_host_pm_flags" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6b0d1cbc, "ath6kl_cfg80211_resume" },
	{ 0x47f4dbb6, "ath6kl_stop_txrx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b7edeb, "ath6kl_core_init" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc0270a2c, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0xb68bc4fd, "sdio_memcpy_fromio" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0x19338a90, "sdio_set_block_size" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0x96474462, "sdio_release_host" },
};

MODULE_INFO(depends, "ath6kl_core,mmc_core");

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
MODULE_ALIAS("sdio:c*v0271d0402*");
MODULE_ALIAS("sdio:c*v0271d0418*");
MODULE_ALIAS("sdio:c*v0271d0419*");

MODULE_INFO(srcversion, "4A648DD1E9DF959B13410DC");
