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
	{ 0x8c05af63, "line6_version_request_async" },
	{ 0x89a5e98d, "line6_resume" },
	{ 0xff791121, "line6_probe" },
	{ 0x7735c9a0, "line6_alloc_sysex_buffer" },
	{ 0x70900a6a, "line6_init_midi" },
	{ 0x9b3899e2, "line6_disconnect" },
	{ 0xb5cdf1da, "line6_send_sysex_message" },
	{ 0x202a1b1b, "line6_midi_id" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x3e7250a0, "snd_card_add_dev_attr" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4991658c, "line6_init_pcm" },
	{ 0xe167537a, "line6_suspend" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0xce60c842, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4252d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5051d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p5044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p5050d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "63B65B3133670D6C28687E1");
