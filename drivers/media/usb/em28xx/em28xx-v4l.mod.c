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
	{ 0xd6abbfca, "em28xx_read_reg" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x608c8d17, "v4l2_event_unsubscribe" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xf95a8ab, "video_device_release_empty" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x6d0da757, "media_device_unregister_entity" },
	{ 0xe8af67cf, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x5f7d9f4c, "em28xx_write_regs" },
	{ 0x71d6b71, "v4l2_ctrl_notify" },
	{ 0xb0baebbf, "em28xx_setup_xc3028" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0x1ef9a684, "vb2_fop_poll" },
	{ 0x6aa4c634, "v4l2_mc_create_media_graph" },
	{ 0xb6d10e0a, "vb2_ioctl_streamon" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2166a1e2, "vb2_ops_wait_prepare" },
	{ 0x5281f83f, "em28xx_init_usb_xfer" },
	{ 0xafafcb31, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa41a12e7, "em28xx_register_extension" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0xaa03ce25, "media_entity_setup_link" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0xfc1007ca, "vb2_fop_read" },
	{ 0x1d15650f, "v4l2_device_disconnect" },
	{ 0x5064d469, "vb2_vmalloc_memops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa33d1070, "vb2_fop_mmap" },
	{ 0xec3997a9, "vb2_ioctl_qbuf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xacfbdcc1, "video_unregister_device" },
	{ 0x8949f7df, "media_entity_pads_init" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xa1aa9c75, "v4l2_ctrl_subscribe_event" },
	{ 0x81e9271d, "vb2_plane_vaddr" },
	{ 0xc0cf41c6, "vb2_buffer_done" },
	{ 0xa405964, "em28xx_unregister_extension" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x807b5dd, "vb2_ioctl_prepare_buf" },
	{ 0x66163594, "em28xx_uninit_usb_xfer" },
	{ 0xd8b289b4, "vb2_ioctl_create_bufs" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x3ef645e8, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x568196c3, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x67831531, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb95e5ae1, "vb2_fop_release" },
	{ 0x31aeb55d, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa852564a, "em28xx_audio_setup" },
	{ 0x21cdeda5, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1aad7525, "v4l2_i2c_subdev_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7827473c, "v4l2_fh_open" },
	{ 0x87c6a145, "em28xx_set_mode" },
	{ 0x470b9d6, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0xe72b9340, "vb2_ops_wait_finish" },
	{ 0xf0853e98, "em28xx_stop_urbs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x46d5d90d, "em28xx_write_reg" },
	{ 0xb0db7b3, "em28xx_audio_analog_set" },
	{ 0x8bf35d12, "vb2_ioctl_streamoff" },
	{ 0x41796c6b, "video_ioctl2" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x2f6f79fd, "em28xx_init_camera" },
	{ 0x62c94ef7, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,em28xx,videodev,mc,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "68717C4A9D9A1C081FF8F20");
