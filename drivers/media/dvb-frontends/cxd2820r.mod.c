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
	{ 0xf9a482f9, "msleep" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x83abaa9e, "regmap_exit" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8c71f7ca, "gpiochip_remove" },
	{ 0xd17ba9c4, "gpiochip_add_data_with_key" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x2aab9190, "__regmap_init_i2c" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xcf0b309d, "gpiochip_get_data" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1ea4e27a, "i2c_new_dummy_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x8733236, "intlog10" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xa13d3d7a, "i2c_new_device" },
};

MODULE_INFO(depends, "i2c-core,dvb-core,regmap-i2c");

MODULE_ALIAS("i2c:cxd2820r");

MODULE_INFO(srcversion, "E4F404A300BAF312862A4DE");
