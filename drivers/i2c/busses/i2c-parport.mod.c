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
	{ 0x946cfd49, "param_ops_int" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x805ee212, "parport_unregister_driver" },
	{ 0xa302b716, "__parport_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x433c7323, "i2c_setup_smbus_alert" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf1d5760e, "i2c_bit_add_bus" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x17c7abd9, "parport_claim_or_block" },
	{ 0x29039bd9, "parport_register_dev_model" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd1c55580, "parport_unregister_device" },
	{ 0x9ed06667, "parport_release" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xf4083ce9, "i2c_handle_smbus_alert" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,i2c-core,i2c-algo-bit,i2c-smbus");


MODULE_INFO(srcversion, "1E4873AD8A563AD197C5FCD");
