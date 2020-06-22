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
	{ 0x1f73ba20, "iio_unregister_sw_trigger_type" },
	{ 0x19a892cd, "iio_register_sw_trigger_type" },
	{ 0xe8b6423, "config_group_init_type_name" },
	{ 0xb0c15644, "__iio_trigger_register" },
	{ 0x9a4a70b7, "iio_trigger_alloc" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0xca7d8764, "kthread_freezable_should_stop" },
	{ 0x49392912, "iio_trigger_poll_chained" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c8b285d, "iio_trigger_free" },
	{ 0x9004b748, "iio_trigger_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio-sw-trigger,configfs,industrialio");


MODULE_INFO(srcversion, "C4982957715C5D006D1147C");
