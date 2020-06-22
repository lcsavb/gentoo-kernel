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
	{ 0x946cfd49, "param_ops_int" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x8e1e4b64, "tty_register_driver" },
	{ 0x20061667, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xee06a2c0, "__tty_alloc_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfb578fc5, "memset" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2c00a78, "tty_port_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x1a281859, "pv_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd5f05a94, "do_SAK" },
	{ 0xbfa1b55b, "tty_flip_buffer_push" },
	{ 0x50f384d0, "__tty_insert_flip_char" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe8a25f20, "tty_port_raise_dtr_rts" },
	{ 0x883e4c5d, "tty_lock" },
	{ 0x3462ff59, "tty_unlock" },
	{ 0x7f61fc99, "tty_port_carrier_raised" },
	{ 0xfc6bbfd7, "tty_hung_up_p" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5c6dfbb0, "tty_port_close_end" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1adb23eb, "tty_ldisc_flush" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdd344bc7, "tty_port_close_start" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1d771356, "tty_port_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x65c65f80, "put_tty_driver" },
	{ 0x31d68c60, "tty_unregister_driver" },
	{ 0x9189399e, "tty_hangup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7959d627, "tty_ldisc_deref" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf28f82a8, "tty_ldisc_ref" },
	{ 0xbd942eae, "tty_port_install" },
	{ 0x334962a0, "tty_wakeup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x712e52f7, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000013C0d00000030sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "78C29B7604A547A1E78BCF5");
