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
	{ 0x824dfd1f, "i2c_mux_add_adapter" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xb8ac502f, "regmap_multi_reg_write" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x2fd2a8bd, "i2c_mux_del_adapters" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x17475388, "_dev_warn" },
	{ 0x70e9297, "i2c_mux_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x853bb144, "__i2c_transfer" },
	{ 0x8733236, "intlog10" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xa13d3d7a, "i2c_new_device" },
	{ 0xa4d6f89a, "release_firmware" },
};

MODULE_INFO(depends, "i2c-mux,i2c-core,dvb-core,regmap-i2c");

MODULE_ALIAS("i2c:m88ds3103");

MODULE_INFO(srcversion, "B899261B3E1AB56CB11EDF9");
