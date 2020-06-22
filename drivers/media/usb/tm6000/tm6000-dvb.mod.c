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
	{ 0x167e9e59, "param_ops_short" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x825a9f70, "tm6000_unregister_extension" },
	{ 0x2efc6d88, "tm6000_register_extension" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdff8e89d, "tm6000_tuner_callback" },
	{ 0x7acb014d, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x1c5950b6, "dvb_register_frontend" },
	{ 0x2309a6d6, "tm6000_xc5000_callback" },
	{ 0x63b4b26a, "dvb_register_adapter" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x9c6d8a9d, "usb_clear_halt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xf6f34c9e, "tm6000_init_digital_mode" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x89b611dd, "tm6000_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x13670a62, "dvb_unregister_adapter" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xe962dace, "dvb_dmxdev_release" },
	{ 0x3eb6648d, "dvb_frontend_detach" },
	{ 0xda96cd1e, "dvb_unregister_frontend" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tm6000,dvb-core");


MODULE_INFO(srcversion, "75EF8A5C8E9FA70385D02BD");
