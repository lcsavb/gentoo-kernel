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
	{ 0xa405964, "em28xx_unregister_extension" },
	{ 0xa41a12e7, "em28xx_register_extension" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x66163594, "em28xx_uninit_usb_xfer" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x24be394, "dvb_create_media_graph" },
	{ 0xe962dace, "dvb_dmxdev_release" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x7acb014d, "dvb_dmxdev_init" },
	{ 0xda96cd1e, "dvb_unregister_frontend" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x13670a62, "dvb_unregister_adapter" },
	{ 0x1c5950b6, "dvb_register_frontend" },
	{ 0x17475388, "_dev_warn" },
	{ 0x63b4b26a, "dvb_register_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0xd40d675d, "em28xx_alloc_urbs" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x3eb6648d, "dvb_frontend_detach" },
	{ 0xc5850110, "printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xb0baebbf, "em28xx_setup_xc3028" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0x5281f83f, "em28xx_init_usb_xfer" },
	{ 0x3a282a1a, "dvb_frontend_suspend" },
	{ 0xf7c78993, "dvb_frontend_resume" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xf0853e98, "em28xx_stop_urbs" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xecb90d21, "em28xx_write_reg_bits" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x46d5d90d, "em28xx_write_reg" },
	{ 0x16d80a62, "em28xx_gpio_set" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa10209c7, "dvb_module_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x133073e9, "dvb_module_probe" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfe990052, "gpio_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x87c6a145, "em28xx_set_mode" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "em28xx,dvb-core,i2c-core");


MODULE_INFO(srcversion, "F3DF3D47242A31857C962F0");
