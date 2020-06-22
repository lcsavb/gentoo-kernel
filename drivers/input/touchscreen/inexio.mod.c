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
	{ 0x19d88bab, "serio_unregister_driver" },
	{ 0x7ce5f416, "__serio_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xad0cba41, "input_event" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x3d6a7db1, "serio_open" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x94bd2068, "put_device" },
	{ 0xd2ad483d, "serio_close" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xd94181ab, "get_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty02pr37id*ex*");

MODULE_INFO(srcversion, "D109D37EAAD9FC557EB575B");
