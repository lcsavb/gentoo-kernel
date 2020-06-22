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
	{ 0x42a508e0, "_dev_info" },
	{ 0x97e9a2ac, "v4l2_i2c_subdev_init" },
	{ 0x835eced0, "v4l2_ctrl_auto_cluster" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdd64e639, "strscpy" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,videodev,regmap-i2c");

MODULE_ALIAS("i2c:fc2580");

MODULE_INFO(srcversion, "4242F51F1B63E1A7FD8D3F6");
