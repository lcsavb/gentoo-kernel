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
	{ 0x3b052859, "param_ops_ushort" },
	{ 0xd1e8bffb, "param_ops_byte" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x4d51b0fb, "usbatm_usb_disconnect" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xf6a978cc, "usb_driver_claim_interface" },
	{ 0x4cf8df0b, "usb_altnum_to_altsetting" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x1815e53d, "usb_driver_release_interface" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6e3bcd97, "usbatm_usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbatm");


MODULE_INFO(srcversion, "8874015DD65844BE4130A67");
