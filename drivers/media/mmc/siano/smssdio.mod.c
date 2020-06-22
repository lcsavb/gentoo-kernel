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
	{ 0xbcc326fb, "smscore_start_device" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0x19338a90, "sdio_set_block_size" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0x5a340582, "smscore_set_board_id" },
	{ 0x555270c3, "smscore_register_device" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc0270a2c, "sdio_memcpy_toio" },
	{ 0x37d91069, "smsendian_handle_tx_message" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x44bd3d7b, "smscore_getbuffer" },
	{ 0xdf201ad2, "smscore_onresponse" },
	{ 0x45284ae9, "smsendian_handle_rx_message" },
	{ 0xb68bc4fd, "sdio_memcpy_fromio" },
	{ 0x9303e35d, "sdio_readb" },
	{ 0x37a0cba, "kfree" },
	{ 0x96474462, "sdio_release_host" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0xb0e46d7a, "smscore_unregister_device" },
	{ 0x6d6d153b, "smscore_putbuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core,smsmdtv");

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");

MODULE_INFO(srcversion, "57CB2AF9EB419F35741F95E");
