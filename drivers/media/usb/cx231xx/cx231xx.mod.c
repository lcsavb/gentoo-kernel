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
	{ 0x1e2c124d, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x608c8d17, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x824dfd1f, "i2c_mux_add_adapter" },
	{ 0xf95a8ab, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x640058, "videobuf_mmap_mapper" },
	{ 0xe8af67cf, "v4l2_i2c_new_subdev" },
	{ 0x471110c7, "v4l2_ctrl_log_status" },
	{ 0xc3dad208, "v4l2_subdev_call_wrappers" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x2fd2a8bd, "i2c_mux_del_adapters" },
	{ 0x2193496b, "usb_reset_endpoint" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0xd0f88e01, "__media_device_usb_init" },
	{ 0xffe4e15f, "cx2341x_handler_set_50hz" },
	{ 0x8a2345c2, "cx2341x_handler_init" },
	{ 0x45c4239e, "videobuf_queue_vmalloc_init" },
	{ 0x6aa4c634, "v4l2_mc_create_media_graph" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x6809072, "videobuf_streamon" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xafafcb31, "__video_register_device" },
	{ 0x90fb76c8, "videobuf_iolock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0xaa03ce25, "media_entity_setup_link" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0x1a281859, "pv_ops" },
	{ 0x83662f8e, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x70e9297, "i2c_mux_alloc" },
	{ 0x6c4f4a2b, "v4l2_s_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf73ca6f4, "videobuf_qbuf" },
	{ 0xacfbdcc1, "video_unregister_device" },
	{ 0x8949f7df, "media_entity_pads_init" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xf34042eb, "v4l2_event_pending" },
	{ 0xe99bca2f, "v4l2_fh_init" },
	{ 0xa1aa9c75, "v4l2_ctrl_subscribe_event" },
	{ 0xb4d8630f, "videobuf_querybuf" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x16f3c851, "videobuf_read_stream" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xd06140af, "media_device_cleanup" },
	{ 0x568196c3, "media_device_register_entity" },
	{ 0x499598ca, "videobuf_stop" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0xfe0afce9, "cx2341x_handler_setup" },
	{ 0x31aeb55d, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x9c6d8a9d, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x16be1d72, "videobuf_vmalloc_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5d23208d, "videobuf_to_vmalloc" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5a2f5e26, "videobuf_dqbuf" },
	{ 0xcfdb1723, "videobuf_queue_is_busy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x9fb4c063, "__media_device_register" },
	{ 0x14da3ca3, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x8c98b06c, "videobuf_reqbufs" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x921ad121, "v4l2_fh_add" },
	{ 0x2d5da3c8, "v4l2_fh_del" },
	{ 0x79c089a9, "v4l2_ctrl_add_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0x30612838, "v4l2_ctrl_radio_filter" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x52d5eaf5, "videobuf_read_stop" },
	{ 0xa13d3d7a, "i2c_new_device" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x40133f35, "media_device_unregister" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x41796c6b, "video_ioctl2" },
	{ 0x39ac1f1a, "videobuf_poll_stream" },
	{ 0x4472f91d, "v4l2_ctrl_poll" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x63e1ffa7, "v4l2_fh_exit" },
	{ 0xdaf4ba92, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-core,videodev,i2c-mux,tveeprom,i2c-core,mc,cx2341x,videobuf-vmalloc,rc-core");

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB124d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5E50A27CC109D09817686B0");
