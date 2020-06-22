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
	{ 0x5fc72298, "rsi_91x_init" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x757c0d3a, "sdio_writesb" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0x8143f5e4, "rsi_config_wowlan" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0xc640f800, "mmc_wait_for_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x712e52f7, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xad40c8b5, "rsi_mac80211_detach" },
	{ 0xb6786ab5, "rsi_read_pkt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1754d85f, "sdio_readsb" },
	{ 0xf9c42cdc, "sdio_unregister_driver" },
	{ 0x696afc99, "sdio_f0_writeb" },
	{ 0x128d1bbd, "sdio_set_host_pm_flags" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbba1bf59, "sdio_f0_readb" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xf9814f29, "rsi_hal_device_init" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x3b052859, "param_ops_ushort" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x603a9ed7, "rsi_91x_deinit" },
	{ 0x19338a90, "sdio_set_block_size" },
	{ 0x67060bf6, "rsi_bt_ops" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0x96474462, "sdio_release_host" },
};

MODULE_INFO(depends, "mmc_core,rsi_91x,btrsi");

MODULE_ALIAS("sdio:c*v041Bd9330*");
MODULE_ALIAS("sdio:c*v041Bd9116*");

MODULE_INFO(srcversion, "B104A76BDAB63CA1CE7FB4F");
