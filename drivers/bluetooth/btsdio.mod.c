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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x190b4cc, "hci_recv_frame" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x1754d85f, "sdio_readsb" },
	{ 0x9303e35d, "sdio_readb" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x757c0d3a, "sdio_writesb" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x511f9fcc, "hci_register_dev" },
	{ 0x73421355, "hci_alloc_dev" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0x96474462, "sdio_release_host" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0x2a83ff05, "sdio_writeb" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x26054bdc, "hci_free_dev" },
	{ 0x8b2db4, "hci_unregister_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core,bluetooth");

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "58398886812F0B4CE9E4672");
