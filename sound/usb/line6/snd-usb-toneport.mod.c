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
	{ 0x15cf0127, "line6_read_serial_number" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x89a5e98d, "line6_resume" },
	{ 0xff791121, "line6_probe" },
	{ 0x6a18dad0, "line6_write_data" },
	{ 0x9b3899e2, "line6_disconnect" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xa637e753, "line6_pcm_release" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x84a216e9, "line6_pcm_acquire" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4991658c, "line6_init_pcm" },
	{ 0xe167537a, "line6_suspend" },
	{ 0xc9e43645, "line6_read_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4151d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4147d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4141d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4142d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "83E4D0F4FC4A1266CBAA202");
