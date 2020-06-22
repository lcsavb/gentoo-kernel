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
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xad0cba41, "input_event" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v084Ep1001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A5301A4FBD77C2BAFB6C45A");
