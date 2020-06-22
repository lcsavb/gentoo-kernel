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
	{ 0x9b3899e2, "line6_disconnect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xf6a978cc, "usb_driver_claim_interface" },
	{ 0x3e7250a0, "snd_card_add_dev_attr" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4991658c, "line6_init_pcm" },
	{ 0xe167537a, "line6_suspend" },
	{ 0xc9e43645, "line6_read_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1815e53d, "usb_driver_release_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0xc29f72b3, "usb_ifnum_to_if" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p5057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p414Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4159d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4156d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "47399B8C8A298545F2EF49C");
