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
	{ 0xe72b9340, "vb2_ops_wait_finish" },
	{ 0x2166a1e2, "vb2_ops_wait_prepare" },
	{ 0xb95e5ae1, "vb2_fop_release" },
	{ 0xa33d1070, "vb2_fop_mmap" },
	{ 0x41796c6b, "video_ioctl2" },
	{ 0x1ef9a684, "vb2_fop_poll" },
	{ 0xfc1007ca, "vb2_fop_read" },
	{ 0x608c8d17, "v4l2_event_unsubscribe" },
	{ 0xa1aa9c75, "v4l2_ctrl_subscribe_event" },
	{ 0x471110c7, "v4l2_ctrl_log_status" },
	{ 0x8bf35d12, "vb2_ioctl_streamoff" },
	{ 0xb6d10e0a, "vb2_ioctl_streamon" },
	{ 0x3ef645e8, "vb2_ioctl_dqbuf" },
	{ 0xec3997a9, "vb2_ioctl_qbuf" },
	{ 0x470b9d6, "vb2_ioctl_querybuf" },
	{ 0x6cb99d90, "vb2_ioctl_reqbufs" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xafafcb31, "__video_register_device" },
	{ 0x62c94ef7, "vb2_queue_init" },
	{ 0x5064d469, "vb2_vmalloc_memops" },
	{ 0x9b3549b3, "v4l2_ctrl_new_custom" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7827473c, "v4l2_fh_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0xacfbdcc1, "video_unregister_device" },
	{ 0x1d15650f, "v4l2_device_disconnect" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0xc0cf41c6, "vb2_buffer_done" },
	{ 0x81e9271d, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1db8475d, "__v4l2_ctrl_s_ctrl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x31aeb55d, "video_devdata" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "08392B36EC425C6D4EDFAD1");
