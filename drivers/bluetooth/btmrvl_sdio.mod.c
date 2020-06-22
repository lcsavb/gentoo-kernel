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
	{ 0xf9c42cdc, "sdio_unregister_driver" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0x5278b280, "btmrvl_register_hdev" },
	{ 0x8856dd02, "btmrvl_add_card" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x19338a90, "sdio_set_block_size" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x757c0d3a, "sdio_writesb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe1162984, "btmrvl_check_evtpkt" },
	{ 0x190b4cc, "hci_recv_frame" },
	{ 0xa724cb3b, "btmrvl_process_event" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xa26e18b0, "btmrvl_send_module_cfg_cmd" },
	{ 0x50c33fe5, "btmrvl_remove_card" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2fec174e, "btmrvl_interrupt" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1754d85f, "sdio_readsb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0x128d1bbd, "sdio_set_host_pm_flags" },
	{ 0xfb29813c, "btmrvl_enable_hs" },
	{ 0xb660df6, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xca7f6923, "hci_resume_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bc34da2, "sdio_get_host_pm_caps" },
	{ 0xf8c87567, "dev_coredumpv" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0x718b8b7, "bt_info" },
	{ 0x9303e35d, "sdio_readb" },
	{ 0xbba1bf59, "sdio_f0_readb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x96474462, "sdio_release_host" },
	{ 0x2a83ff05, "sdio_writeb" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core,btmrvl,bluetooth");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "DB38BC14578C57EBC8E68FC");
