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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xac8f52e7, "usb_stor_post_reset" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x7f7a8d8c, "usb_stor_disconnect" },
	{ 0xad0cba41, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1fd68c8f, "usb_stor_probe2" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x4c8a945, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xa5005ae7, "usb_stor_pre_reset" },
	{ 0x439a356e, "usb_stor_reset_resume" },
	{ 0x78cab840, "usb_stor_suspend" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0xe8e6cf5f, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x15033a3a, "usb_stor_resume" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xf443f897, "input_allocate_device" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AA1C72B24A7B99DC1A5153D");
