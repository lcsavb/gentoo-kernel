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
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x12cdfb2d, "rc_unregister_device" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x40120314, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x7bce21ff, "framebuffer_release" },
	{ 0xda584c89, "single_release" },
	{ 0x1af47346, "fb_sys_read" },
	{ 0xd19db114, "backlight_device_register" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xae359c03, "__hid_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x4994ff1d, "sys_copyarea" },
	{ 0xae254cfe, "seq_read" },
	{ 0x83662f8e, "rc_allocate_device" },
	{ 0x9cee5362, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0xad0cba41, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xa3114135, "rc_free_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa3030d4c, "hid_hw_close" },
	{ 0xbb37fb2b, "register_framebuffer" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x4f91bd8a, "rc_register_device" },
	{ 0x9889e67b, "hid_hw_open" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5b8018f1, "lcd_device_unregister" },
	{ 0x5ac7defe, "hid_set_field" },
	{ 0x6a683da4, "simple_open" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xcb7ae1c8, "hid_alloc_report_buf" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xa91b0d3c, "sys_fillrect" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x76627c4e, "sys_imageblit" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xe10b19c5, "fb_sys_write" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x80171127, "hid_hw_stop" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe4a1a932, "framebuffer_alloc" },
	{ 0xc1a143f8, "fb_deferred_io_cleanup" },
	{ 0x1b51c039, "fb_deferred_io_init" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x1213e73a, "lcd_device_register" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0x7ea16622, "ir_raw_event_store" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x87463a4e, "backlight_device_unregister" },
	{ 0xa3ba928d, "ir_raw_event_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb4a94df, "hid_output_report" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x328c2454, "unregister_framebuffer" },
};

MODULE_INFO(depends, "rc-core,backlight,lcd");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "49E152C94A4807E123216E1");
