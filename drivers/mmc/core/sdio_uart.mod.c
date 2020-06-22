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
	{ 0x65c65f80, "put_tty_driver" },
	{ 0x31d68c60, "tty_unregister_driver" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0x8e1e4b64, "tty_register_driver" },
	{ 0x20061667, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xee06a2c0, "__tty_alloc_driver" },
	{ 0xc5850110, "printk" },
	{ 0xab69978c, "tty_port_register_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2c00a78, "tty_port_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x750b0db0, "tty_unregister_device" },
	{ 0xd5a5b722, "tty_standard_install" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa6ac98, "seq_putc" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbfa1b55b, "tty_flip_buffer_push" },
	{ 0x50f384d0, "__tty_insert_flip_char" },
	{ 0x334962a0, "tty_wakeup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3b542f12, "tty_kref_put" },
	{ 0x7c338244, "tty_port_tty_get" },
	{ 0x67211d90, "tty_port_tty_hangup" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0xcab222b1, "tty_port_open" },
	{ 0x55408902, "tty_port_close" },
	{ 0x7dce046c, "tty_port_hangup" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x2a83ff05, "sdio_writeb" },
	{ 0x96474462, "sdio_release_host" },
	{ 0x9303e35d, "sdio_readb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0x712e52f7, "current_task" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x27bc3136, "tty_port_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core");

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");

MODULE_INFO(srcversion, "F71EA00D7DECD686DE010F5");
