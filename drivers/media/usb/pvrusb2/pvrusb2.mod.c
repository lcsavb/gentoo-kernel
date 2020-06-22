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
	{ 0xa24f23d8, "__request_module" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x133073e9, "dvb_module_probe" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x13670a62, "dvb_unregister_adapter" },
	{ 0x754d539c, "strlen" },
	{ 0xe8af67cf, "v4l2_i2c_new_subdev" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x1c5950b6, "dvb_register_frontend" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xda96cd1e, "dvb_unregister_frontend" },
	{ 0xafafcb31, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdaff62f9, "cx2341x_fill_defaults" },
	{ 0xdd64e639, "strscpy" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0xc889377e, "cx2341x_log_status" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0x3eb6648d, "dvb_frontend_detach" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0x8d3a49fd, "cx2341x_ctrl_get_menu" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x1d15650f, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0x6c4f4a2b, "v4l2_s_ctrl" },
	{ 0x167e9e59, "param_ops_short" },
	{ 0x674fc839, "device_register" },
	{ 0x861a6924, "usb_lock_device_for_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xb9c8f3f1, "cx2341x_update" },
	{ 0xc1b1b6c5, "freezing_slow_path" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xe962dace, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xacfbdcc1, "video_unregister_device" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x1b13d538, "class_unregister" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xe99bca2f, "v4l2_fh_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe25f88e, "device_move" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x377bbe07, "usb_urb_ep_type_check" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xa10209c7, "dvb_module_release" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x94bd2068, "put_device" },
	{ 0x31aeb55d, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x9c6d8a9d, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb854f47, "cx2341x_ctrl_query" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x63b4b26a, "dvb_register_adapter" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x96848186, "scnprintf" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x921ad121, "v4l2_fh_add" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x2d5da3c8, "v4l2_fh_del" },
	{ 0xf4d81106, "cx2341x_ext_ctrls" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x806f9540, "dev_set_name" },
	{ 0xa13d3d7a, "i2c_new_device" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x41796c6b, "video_ioctl2" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x7acb014d, "dvb_dmxdev_init" },
	{ 0x63e1ffa7, "v4l2_fh_exit" },
};

MODULE_INFO(depends, "dvb-core,videodev,tveeprom,i2c-core,cx2341x");

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7510d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CD89329035E1258F49F34E3");
