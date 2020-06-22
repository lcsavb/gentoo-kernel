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
	{ 0xf9c42cdc, "sdio_unregister_driver" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x511f9fcc, "hci_register_dev" },
	{ 0x73421355, "hci_alloc_dev" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x8790ad6a, "__hci_cmd_sync" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xf0fe4c03, "__hci_cmd_send" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x214e4265, "bt_warn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1754d85f, "sdio_readsb" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x757c0d3a, "sdio_writesb" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x190b4cc, "hci_recv_frame" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x19338a90, "sdio_set_block_size" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x26054bdc, "hci_free_dev" },
	{ 0x8b2db4, "hci_unregister_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96474462, "sdio_release_host" },
	{ 0x718b8b7, "bt_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcf0afa76, "sdio_readl" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x359ecbd9, "sdio_writel" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core,bluetooth");


MODULE_INFO(srcversion, "D907F2935B9EB2739A71026");
