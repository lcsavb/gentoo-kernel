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
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x811606e8, "dvb_usb_device_exit" },
	{ 0x65de22b, "dvb_usb_device_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x167e9e59, "param_ops_short" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0x7f4bea61, "rc_keydown" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a9fe762, "dvb_ca_en50221_release" },
	{ 0xa3a91d0f, "rc_keyup" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xb2426b60, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x53f2ab7a, "dvb_ca_en50221_init" },
};

MODULE_INFO(depends, "dvb-usb,rc-core,dvb-core");

MODULE_ALIAS("usb:v2304p020Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0222d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p300Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0C7878493ED2222B98DD344");
