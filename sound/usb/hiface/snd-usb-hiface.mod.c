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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xf82a0186, "usb_init_urb" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1a281859, "pv_ops" },
	{ 0x285da2e0, "snd_card_disconnect" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0x281a03c3, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7f10960c, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x377bbe07, "usb_urb_ep_type_check" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x5541c382, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0x5e59a1c6, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x52a578fc, "usb_anchor_urb" },
};

MODULE_INFO(depends, "snd-pcm,snd");

MODULE_ALIAS("usb:v04B4p0384d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p930Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p9320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p9321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp932Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v245Fp931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v25C6p9002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F236F9EB692FD1D1B643293");
