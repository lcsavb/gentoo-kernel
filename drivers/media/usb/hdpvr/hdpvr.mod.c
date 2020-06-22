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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x608c8d17, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xde4c3ff6, "v4l2_ctrl_cluster" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x471110c7, "v4l2_ctrl_log_status" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xafafcb31, "__video_register_device" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x953eb96d, "v4l2_ctrl_activate" },
	{ 0xdd64e639, "strscpy" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xcf5d43a7, "v4l2_ctrl_new_std_menu" },
	{ 0x1d15650f, "v4l2_device_disconnect" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xacfbdcc1, "video_unregister_device" },
	{ 0xe99bca2f, "v4l2_fh_init" },
	{ 0xa1aa9c75, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3e1cd450, "v4l2_fh_release" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x31aeb55d, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x21cdeda5, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x921ad121, "v4l2_fh_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xa13d3d7a, "i2c_new_device" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x41796c6b, "video_ioctl2" },
	{ 0x4472f91d, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "videodev,i2c-core,v4l2-dv-timings");

MODULE_ALIAS("usb:v2040p4900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4982d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4903d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "852673E75D612674FF31849");
