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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x41796c6b, "video_ioctl2" },
	{ 0x608c8d17, "v4l2_event_unsubscribe" },
	{ 0xa1aa9c75, "v4l2_ctrl_subscribe_event" },
	{ 0x471110c7, "v4l2_ctrl_log_status" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xafafcb31, "__video_register_device" },
	{ 0x45c4239e, "videobuf_queue_vmalloc_init" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf95a8ab, "video_device_release_empty" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xa443c932, "videobuf_read_one" },
	{ 0x6809072, "videobuf_streamon" },
	{ 0x21cdeda5, "v4l2_ctrl_handler_setup" },
	{ 0xcfdb1723, "videobuf_queue_is_busy" },
	{ 0x3e1cd450, "v4l2_fh_release" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x640058, "videobuf_mmap_mapper" },
	{ 0x90fb76c8, "videobuf_iolock" },
	{ 0x16be1d72, "videobuf_vmalloc_free" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5d23208d, "videobuf_to_vmalloc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0x999e8297, "vfree" },
	{ 0x1e2c124d, "videobuf_mmap_free" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0x39ac1f1a, "videobuf_poll_stream" },
	{ 0x4472f91d, "v4l2_ctrl_poll" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7827473c, "v4l2_fh_open" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x8c98b06c, "videobuf_reqbufs" },
	{ 0xb4d8630f, "videobuf_querybuf" },
	{ 0xf73ca6f4, "videobuf_qbuf" },
	{ 0x5a2f5e26, "videobuf_dqbuf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdaf4ba92, "videobuf_streamoff" },
	{ 0x31aeb55d, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x625cb4d9, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1d15650f, "v4l2_device_disconnect" },
	{ 0xacfbdcc1, "video_unregister_device" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,videobuf-vmalloc,videobuf-core");

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1DCA7653BF505EB69E8930");
