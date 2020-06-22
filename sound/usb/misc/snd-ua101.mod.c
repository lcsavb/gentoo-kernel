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
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xf82a0186, "usb_init_urb" },
	{ 0x480b2926, "snd_pcm_hw_constraint_msbits" },
	{ 0x63900e92, "snd_pcm_stop_xrun" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1a281859, "pv_ops" },
	{ 0x285da2e0, "snd_card_disconnect" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0x281a03c3, "snd_card_free_when_closed" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7f10960c, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xf6a978cc, "usb_driver_claim_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x846cd9ad, "__snd_usbmidi_create" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xa916b694, "strnlen" },
	{ 0x5541c382, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1815e53d, "usb_driver_release_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xaa16ff73, "snd_pcm_hw_constraint_minmax" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0xc29f72b3, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0x5e59a1c6, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0x1159a640, "param_ops_uint" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-pcm,snd");

MODULE_ALIAS("usb:v0582p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FD14233FD7998CDB90F94D9");
