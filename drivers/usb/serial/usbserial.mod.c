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
	{ 0x7c338244, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3120ffbb, "bus_register" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0xd517f601, "seq_puts" },
	{ 0xcab222b1, "tty_port_open" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7dce046c, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8e1e4b64, "tty_register_driver" },
	{ 0x94b1e044, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x65c65f80, "put_tty_driver" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x20061667, "tty_set_operations" },
	{ 0x17475388, "_dev_warn" },
	{ 0x50f384d0, "__tty_insert_flip_char" },
	{ 0x55408902, "tty_port_close" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7533a30b, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7959d627, "tty_ldisc_deref" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xab69978c, "tty_port_register_device" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x845c84d, "usb_unpoison_urb" },
	{ 0xc0e474fd, "usb_poison_urb" },
	{ 0xa6ac98, "seq_putc" },
	{ 0x2c00a78, "tty_port_init" },
	{ 0x47657ba2, "tty_insert_flip_string_fixed_flag" },
	{ 0x1d771356, "tty_port_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa891a378, "tty_vhangup" },
	{ 0xf28f82a8, "tty_ldisc_ref" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x45cd73e1, "device_add" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4dff2d54, "usb_store_new_id" },
	{ 0x1b895e6d, "usb_match_id" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x39e3722e, "tty_port_tty_wakeup" },
	{ 0x681e3cee, "module_put" },
	{ 0x750b0db0, "tty_unregister_device" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf8a66f0d, "usb_get_intf" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x31d68c60, "tty_unregister_driver" },
	{ 0x9189399e, "tty_hangup" },
	{ 0xc17e9946, "usb_show_dynids" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd5a5b722, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xee06a2c0, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0xf79fd0a7, "usb_match_one_id" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x3b542f12, "tty_kref_put" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x82cd0821, "driver_attach" },
	{ 0xbfa1b55b, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b052859, "param_ops_ushort" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x20978fb9, "idr_find" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x96833e4d, "usb_autopm_put_interface" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xe1b5d657, "usb_put_intf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD14EE38A11E09A5E7CC930");
