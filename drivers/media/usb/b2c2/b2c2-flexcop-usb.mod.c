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
	{ 0x946cfd49, "param_ops_int" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x62793af8, "flexcop_device_initialize" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2cf4d1b7, "flexcop_device_kfree" },
	{ 0xcd2a12bb, "flexcop_sram_ctrl" },
	{ 0xfb578fc5, "memset" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd59e8e87, "flexcop_device_kmalloc" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x8aaa80ed, "flexcop_sram_set_dest" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3b9a8389, "flexcop_pass_dmx_packets" },
	{ 0xd5c01dfd, "flexcop_wan_set_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xefa880e, "flexcop_device_exit" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A105277B7B1F1A42FA1D7CC");
