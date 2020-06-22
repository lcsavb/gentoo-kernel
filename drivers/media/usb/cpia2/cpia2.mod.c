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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x608c8d17, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xde4c3ff6, "v4l2_ctrl_cluster" },
	{ 0xf95a8ab, "video_device_release_empty" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xafafcb31, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xcf5d43a7, "v4l2_ctrl_new_std_menu" },
	{ 0x1d15650f, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0x712e52f7, "current_task" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xacfbdcc1, "video_unregister_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xa1aa9c75, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3e1cd450, "v4l2_fh_release" },
	{ 0xdc5543a1, "v4l2_fh_is_singular" },
	{ 0x9b3549b3, "v4l2_ctrl_new_custom" },
	{ 0x171e2231, "__v4l2_ctrl_grab" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x31aeb55d, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x21cdeda5, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7827473c, "v4l2_fh_open" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x51946c58, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c8f299b, "vmalloc_to_page" },
	{ 0x625cb4d9, "v4l2_device_put" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x41796c6b, "video_ioctl2" },
	{ 0x4472f91d, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x2f548802, "ns_to_timeval" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v0553p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0151d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "269E0BE9683F4BAD08D81E2");
