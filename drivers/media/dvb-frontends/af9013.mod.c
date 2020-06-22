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
	{ 0xab06bf8b, "_dev_err" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x824dfd1f, "i2c_mux_add_adapter" },
	{ 0x70e9297, "i2c_mux_alloc" },
	{ 0x27e319c4, "__regmap_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x853bb144, "__i2c_transfer" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8733236, "intlog10" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x83abaa9e, "regmap_exit" },
	{ 0x2fd2a8bd, "i2c_mux_del_adapters" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,i2c-mux,dvb-core");

MODULE_ALIAS("i2c:af9013");

MODULE_INFO(srcversion, "80BC6F842727F6BA551C9AA");
