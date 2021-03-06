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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xe23aa988, "mlxsw_core_resources_query" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5cf3dd79, "mlxsw_core_bus_device_unregister" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x276f5b04, "mlxsw_core_bus_device_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x484489a4, "mlxsw_cmd_exec" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7a4727c0, "devm_kmalloc" },
};

MODULE_INFO(depends, "i2c-core,mlxsw_core");


MODULE_INFO(srcversion, "32CDC50057C892CFB5BC128");
