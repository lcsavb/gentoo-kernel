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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xad0cba41, "input_event" },
	{ 0xb7cac888, "gpiod_get_raw_value" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:gp2ap002a00f");

MODULE_INFO(srcversion, "44245B6064052B26B3D2A97");
