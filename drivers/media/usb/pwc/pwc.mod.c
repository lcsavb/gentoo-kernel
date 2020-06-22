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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x608c8d17, "v4l2_event_unsubscribe" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xde4c3ff6, "v4l2_ctrl_cluster" },
	{ 0xf95a8ab, "video_device_release_empty" },
	{ 0x4cf8df0b, "usb_altnum_to_altsetting" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x471110c7, "v4l2_ctrl_log_status" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0x1ef9a684, "vb2_fop_poll" },
	{ 0xb6d10e0a, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x2166a1e2, "vb2_ops_wait_prepare" },
	{ 0xafafcb31, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc835b3fd, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0xfc1007ca, "vb2_fop_read" },
	{ 0xad0cba41, "input_event" },
	{ 0xcf5d43a7, "v4l2_ctrl_new_std_menu" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x99b17d7a, "trace_define_field" },
	{ 0x1d15650f, "v4l2_device_disconnect" },
	{ 0x5064d469, "vb2_vmalloc_memops" },
	{ 0xe884de84, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa33d1070, "vb2_fop_mmap" },
	{ 0xec3997a9, "vb2_ioctl_qbuf" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xacfbdcc1, "video_unregister_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xa1aa9c75, "v4l2_ctrl_subscribe_event" },
	{ 0x81e9271d, "vb2_plane_vaddr" },
	{ 0xc0cf41c6, "vb2_buffer_done" },
	{ 0x4819d039, "trace_event_reg" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9b3549b3, "v4l2_ctrl_new_custom" },
	{ 0xa985eae7, "perf_trace_run_bpf_submit" },
	{ 0x3ef645e8, "vb2_ioctl_dqbuf" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb95e5ae1, "vb2_fop_release" },
	{ 0x59478097, "trace_event_ignore_this_pid" },
	{ 0x31aeb55d, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0x835eced0, "v4l2_ctrl_auto_cluster" },
	{ 0x291bec8a, "trace_event_buffer_commit" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7827473c, "v4l2_fh_open" },
	{ 0x226a6bd8, "event_triggers_call" },
	{ 0x68e4e01, "bpf_trace_run2" },
	{ 0x470b9d6, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x3092b99f, "trace_event_raw_init" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xe72b9340, "vb2_ops_wait_finish" },
	{ 0xd56c8357, "trace_raw_output_prep" },
	{ 0xc29f72b3, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x8bf35d12, "vb2_ioctl_streamoff" },
	{ 0x625cb4d9, "v4l2_device_put" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x41796c6b, "video_ioctl2" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x62c94ef7, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "48F758331FE886F4246CE30");
