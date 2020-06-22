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
	{ 0xb67b1ca6, "pnp_unregister_driver" },
	{ 0xc1cd524d, "pnp_register_driver" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0x7d3a45c9, "devm_rc_register_device" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x17125b82, "pnp_get_resource" },
	{ 0x5992eabb, "pnp_activate_dev" },
	{ 0x41c26c41, "devm_rc_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x7ea16622, "ir_raw_event_store" },
	{ 0x17475388, "_dev_warn" },
	{ 0xa3ba928d, "ir_raw_event_handle" },
	{ 0x4241ae7e, "ir_raw_event_store_with_filter" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x3131b773, "ir_raw_encode_scancode" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe0b13336, "argv_free" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7380dffa, "argv_split" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("pnp:dWEC0530*");
MODULE_ALIAS("acpi*:WEC0530:*");
MODULE_ALIAS("pnp:dNTN0530*");
MODULE_ALIAS("acpi*:NTN0530:*");

MODULE_INFO(srcversion, "4D6C1E6D9678F07878C14EB");
