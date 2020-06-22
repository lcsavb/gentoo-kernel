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
	{ 0xd62c00f3, "cdc_ncm_tx_fixup" },
	{ 0x49352c2, "cdc_ncm_rx_fixup" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x5e00d867, "usb_cdc_wdm_register" },
	{ 0x15dbcb0d, "cdc_ncm_bind_common" },
	{ 0x96833e4d, "usb_autopm_put_interface" },
	{ 0x94b1e044, "usb_autopm_get_interface" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0x975c2256, "cdc_ncm_unbind" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cdc_ncm,usbnet,cdc-wdm");

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip16in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip46in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip76in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc03ip16in*");

MODULE_INFO(srcversion, "B33BBD8020DA97C6A188A82");
