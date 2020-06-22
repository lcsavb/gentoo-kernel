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
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xf95a8ab, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xf370747a, "v4l2_event_queue" },
	{ 0x471110c7, "v4l2_ctrl_log_status" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xc3dad208, "v4l2_subdev_call_wrappers" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0x73ef3abe, "v4l2_ctrl_g_ctrl" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0x1ef9a684, "vb2_fop_poll" },
	{ 0xb6d10e0a, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2166a1e2, "vb2_ops_wait_prepare" },
	{ 0xafafcb31, "__video_register_device" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x285da2e0, "snd_card_disconnect" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0xfc1007ca, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcf5d43a7, "v4l2_ctrl_new_std_menu" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x5064d469, "vb2_vmalloc_memops" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa33d1070, "vb2_fop_mmap" },
	{ 0xec3997a9, "vb2_ioctl_qbuf" },
	{ 0xf25546eb, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0xa1aa9c75, "v4l2_ctrl_subscribe_event" },
	{ 0x81e9271d, "vb2_plane_vaddr" },
	{ 0xc0cf41c6, "vb2_buffer_done" },
	{ 0x281a03c3, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9b3549b3, "v4l2_ctrl_new_custom" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x3ef645e8, "vb2_ioctl_dqbuf" },
	{ 0x171e2231, "__v4l2_ctrl_grab" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb95e5ae1, "vb2_fop_release" },
	{ 0x31aeb55d, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7827473c, "v4l2_fh_open" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x470b9d6, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0xe72b9340, "vb2_ops_wait_finish" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0xdaa81d8, "v4l2_i2c_new_subdev_board" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0xb0e602eb, "memmove" },
	{ 0x8c8f299b, "vmalloc_to_page" },
	{ 0x8bf35d12, "vb2_ioctl_streamoff" },
	{ 0x625cb4d9, "v4l2_device_put" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x41796c6b, "video_ioctl2" },
	{ 0x62c94ef7, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,snd,i2c-core,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "AF632BD90F6F9845971F46F");
