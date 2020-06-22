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
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xd6a6593d, "snd_power_wait" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x94b1e044, "usb_autopm_get_interface" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x285da2e0, "snd_card_disconnect" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f94189a, "snd_hwdep_new" },
	{ 0x846cd9ad, "__snd_usbmidi_create" },
	{ 0x377bbe07, "usb_urb_ep_type_check" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf8a66f0d, "usb_get_intf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0x37a0cba, "kfree" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xc29f72b3, "usb_ifnum_to_if" },
	{ 0x823332ad, "usb_get_current_frame_number" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x96833e4d, "usb_autopm_put_interface" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xe1b5d657, "usb_put_intf" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd,snd-hwdep");

MODULE_ALIAS("usb:v0644p800Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p800Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8020d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "59AE68222B9C4FB246AF169");
