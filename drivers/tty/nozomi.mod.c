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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x65c65f80, "put_tty_driver" },
	{ 0x31d68c60, "tty_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x8e1e4b64, "tty_register_driver" },
	{ 0x20061667, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xee06a2c0, "__tty_alloc_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbfa1b55b, "tty_flip_buffer_push" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xab69978c, "tty_port_register_device" },
	{ 0x2c00a78, "tty_port_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x77989b7e, "device_create_file" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x50f384d0, "__tty_insert_flip_char" },
	{ 0x3b542f12, "tty_kref_put" },
	{ 0x47657ba2, "tty_insert_flip_string_fixed_flag" },
	{ 0x7c338244, "tty_port_tty_get" },
	{ 0x39e3722e, "tty_port_tty_wakeup" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x1d771356, "tty_port_destroy" },
	{ 0x750b0db0, "tty_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67211d90, "tty_port_tty_hangup" },
	{ 0xd5a5b722, "tty_standard_install" },
	{ 0xcab222b1, "tty_port_open" },
	{ 0x55408902, "tty_port_close" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7dce046c, "tty_port_hangup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001931d0000000Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "28C828D12EA63D248C58DF0");
