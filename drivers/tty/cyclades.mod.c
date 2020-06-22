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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x65c65f80, "put_tty_driver" },
	{ 0x31d68c60, "tty_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x8e1e4b64, "tty_register_driver" },
	{ 0x20061667, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xee06a2c0, "__tty_alloc_driver" },
	{ 0xab69978c, "tty_port_register_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2c00a78, "tty_port_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xd5f05a94, "do_SAK" },
	{ 0x9189399e, "tty_hangup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1a281859, "pv_ops" },
	{ 0x67211d90, "tty_port_tty_hangup" },
	{ 0x29361773, "complete" },
	{ 0x43c7df2d, "tty_buffer_request_room" },
	{ 0xebf16551, "tty_schedule_flip" },
	{ 0x50f384d0, "__tty_insert_flip_char" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x17475388, "_dev_warn" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf2b8e756, "tty_port_tty_set" },
	{ 0xff1d764c, "tty_port_block_til_ready" },
	{ 0xe8a25f20, "tty_port_raise_dtr_rts" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x7dce046c, "tty_port_hangup" },
	{ 0x334962a0, "tty_wakeup" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xa0309a72, "tty_port_lower_dtr_rts" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x55408902, "tty_port_close" },
	{ 0x69acdf38, "memcpy" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x3b542f12, "tty_kref_put" },
	{ 0x7959d627, "tty_ldisc_deref" },
	{ 0xf28f82a8, "tty_ldisc_ref" },
	{ 0x7c338244, "tty_port_tty_get" },
	{ 0xd517f601, "seq_puts" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d771356, "tty_port_destroy" },
	{ 0x750b0db0, "tty_unregister_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000120Ed00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "60B5682F8060EBC210DE689");
