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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xe8af67cf, "v4l2_i2c_new_subdev" },
	{ 0xc3dad208, "v4l2_subdev_call_wrappers" },
	{ 0x811606e8, "dvb_usb_device_exit" },
	{ 0xa95a28a2, "video_device_release" },
	{ 0x65de22b, "dvb_usb_device_init" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x1ef9a684, "vb2_fop_poll" },
	{ 0xb6d10e0a, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2166a1e2, "vb2_ops_wait_prepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xafafcb31, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xd8cc260, "dib0070_wbd_offset" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0xfc1007ca, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x5064d469, "vb2_vmalloc_memops" },
	{ 0x167e9e59, "param_ops_short" },
	{ 0x59c50955, "video_device_alloc" },
	{ 0xa33d1070, "vb2_fop_mmap" },
	{ 0xec3997a9, "vb2_ioctl_qbuf" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xacfbdcc1, "video_unregister_device" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0x81e9271d, "vb2_plane_vaddr" },
	{ 0xc0cf41c6, "vb2_buffer_done" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x7f4bea61, "rc_keydown" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3e1cd450, "v4l2_fh_release" },
	{ 0x807b5dd, "vb2_ioctl_prepare_buf" },
	{ 0xd8b289b4, "vb2_ioctl_create_bufs" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x3ef645e8, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x681e3cee, "module_put" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb95e5ae1, "vb2_fop_release" },
	{ 0x31aeb55d, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x9c6d8a9d, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7827473c, "v4l2_fh_open" },
	{ 0x470b9d6, "vb2_ioctl_querybuf" },
	{ 0xb2426b60, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xe72b9340, "vb2_ops_wait_finish" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7ff4d40a, "usb_cypress_load_firmware" },
	{ 0xb0e602eb, "memmove" },
	{ 0x8bf35d12, "vb2_ioctl_streamoff" },
	{ 0x2058ec45, "vb2_queue_release" },
	{ 0x625cb4d9, "v4l2_device_put" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x41796c6b, "video_ioctl2" },
	{ 0x51bd55b5, "completion_done" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x62c94ef7, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,dvb-usb,i2c-core,dib0070,videobuf2-vmalloc,videobuf2-common,rc-core");

MODULE_ALIAS("usb:v1660p0932d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB50d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB51d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB54d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB55d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB58d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB59d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB78d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB70d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB71d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA868d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB98d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p86D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pD811d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2FA71A539550221B9EEFA75");
