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
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdd64e639, "strscpy" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd1e8bffb, "param_ops_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c804ab8, "platform_driver_unregister" },
};

MODULE_INFO(depends, "i2c-core");


MODULE_INFO(srcversion, "FB90099C21E9DB49E320CD8");
