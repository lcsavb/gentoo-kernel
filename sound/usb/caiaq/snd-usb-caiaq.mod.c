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
	{ 0x946cfd49, "param_ops_int" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xf82a0186, "usb_init_urb" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xb2c1e2c9, "snd_rawmidi_set_ops" },
	{ 0x1a281859, "pv_ops" },
	{ 0x285da2e0, "snd_card_disconnect" },
	{ 0x9257688e, "snd_rawmidi_new" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xad0cba41, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x17475388, "_dev_warn" },
	{ 0xe884de84, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7f10960c, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xcb5ea423, "snd_card_set_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x377bbe07, "usb_urb_ep_type_check" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x5541c382, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x9a001563, "snd_pcm_limit_hw_rates" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0x5e59a1c6, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0x59a41dad, "snd_rawmidi_transmit" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x8dd9ee12, "snd_rawmidi_receive" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xf443f897, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F759D6A3FBC8A3314E7EB77");
