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
	{ 0x6cb99d90, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x608c8d17, "v4l2_event_unsubscribe" },
	{ 0x80b7662d, "media_device_usb_allocate" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x12cdfb2d, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf92e35fb, "__media_pipeline_start" },
	{ 0x67e3ab85, "media_device_unregister_entity_notify" },
	{ 0x2a9eab0e, "_vb2_fop_release" },
	{ 0xf95a8ab, "video_device_release_empty" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x13670a62, "dvb_unregister_adapter" },
	{ 0x6d0da757, "media_device_unregister_entity" },
	{ 0xe8af67cf, "v4l2_i2c_new_subdev" },
	{ 0x24be394, "dvb_create_media_graph" },
	{ 0x471110c7, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x3a282a1a, "dvb_frontend_suspend" },
	{ 0x1c5950b6, "dvb_register_frontend" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0xf7c78993, "dvb_frontend_resume" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0x1ef9a684, "vb2_fop_poll" },
	{ 0x6aa4c634, "v4l2_mc_create_media_graph" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb6d10e0a, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe4269b1, "v4l_disable_media_source" },
	{ 0x2166a1e2, "vb2_ops_wait_prepare" },
	{ 0xc6fac69c, "media_device_delete" },
	{ 0xda96cd1e, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xafafcb31, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0xaa03ce25, "media_entity_setup_link" },
	{ 0xd1fa51db, "media_get_pad_index" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0x1a281859, "pv_ops" },
	{ 0x83662f8e, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0x3eb6648d, "dvb_frontend_detach" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0xfc1007ca, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x1d15650f, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0x5064d469, "vb2_vmalloc_memops" },
	{ 0xa3114135, "rc_free_device" },
	{ 0x167e9e59, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa33d1070, "vb2_fop_mmap" },
	{ 0xec3997a9, "vb2_ioctl_qbuf" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xe962dace, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xacfbdcc1, "video_unregister_device" },
	{ 0x8949f7df, "media_entity_pads_init" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xa1aa9c75, "v4l2_ctrl_subscribe_event" },
	{ 0x81e9271d, "vb2_plane_vaddr" },
	{ 0xc0cf41c6, "vb2_buffer_done" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x4f91bd8a, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x807b5dd, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x42bf97eb, "tveeprom_read" },
	{ 0xd8b289b4, "vb2_ioctl_create_bufs" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x3ef645e8, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xd945a512, "v4l_enable_media_source" },
	{ 0x568196c3, "media_device_register_entity" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xcc48d87c, "media_device_register_entity_notify" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x31aeb55d, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcd75d323, "__media_pipeline_stop" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x24af49bc, "media_create_pad_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x63b4b26a, "dvb_register_adapter" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7827473c, "v4l2_fh_open" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x470b9d6, "vb2_ioctl_querybuf" },
	{ 0x9fb4c063, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x18ebc3c8, "__media_entity_setup_link" },
	{ 0x69acdf38, "memcpy" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xe72b9340, "vb2_ops_wait_finish" },
	{ 0x7ea16622, "ir_raw_event_store" },
	{ 0x6f777e92, "i2c_probe_func_quick_read" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc29f72b3, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xebc6584d, "vb2_ioctl_expbuf" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8bf35d12, "vb2_ioctl_streamoff" },
	{ 0x2058ec45, "vb2_queue_release" },
	{ 0x625cb4d9, "v4l2_device_put" },
	{ 0xa3ba928d, "ir_raw_event_handle" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x41796c6b, "video_ioctl2" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x7acb014d, "dvb_dmxdev_init" },
	{ 0x62c94ef7, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,rc-core,dvb-core,tveeprom,i2c-core,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5F198037FCC48918D2DD139");
