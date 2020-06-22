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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8c05af63, "line6_version_request_async" },
	{ 0x89a5e98d, "line6_resume" },
	{ 0xff791121, "line6_probe" },
	{ 0x70900a6a, "line6_init_midi" },
	{ 0x9b3899e2, "line6_disconnect" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xe167537a, "line6_suspend" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2421780c, "line6_send_raw_message_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x1dc05a49, "snd_card_register" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p534Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0C29F369D2BF02DEB6E49A4");
