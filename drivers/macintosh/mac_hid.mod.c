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
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0xad0cba41, "input_event" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0xdacffa2c, "input_register_handler" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xcd987a86, "input_unregister_handler" },
	{ 0xc5850110, "printk" },
	{ 0x2b3c89f, "input_open_device" },
	{ 0xf7b25b62, "input_register_handle" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xaaed7270, "input_unregister_handle" },
	{ 0x1db3eb26, "input_close_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*1,*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "3A15AB8478A81CD9BD77B3D");
