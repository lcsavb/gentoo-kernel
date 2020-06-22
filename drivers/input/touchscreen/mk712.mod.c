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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0xc5850110, "printk" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x1a281859, "pv_ops" },
	{ 0xad0cba41, "input_event" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FE4EEBB788C532C9244A5F2");
