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
	{ 0x652b4060, "param_ops_bool" },
	{ 0xb67b1ca6, "pnp_unregister_driver" },
	{ 0xc5850110, "printk" },
	{ 0xc1cd524d, "pnp_register_driver" },
	{ 0x6289a994, "led_classdev_suspend" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4241ae7e, "ir_raw_event_store_with_filter" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xa3114135, "rc_free_device" },
	{ 0x4f91bd8a, "rc_register_device" },
	{ 0x83662f8e, "rc_allocate_device" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x17125b82, "pnp_get_resource" },
	{ 0x3d668841, "led_classdev_resume" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xa3ba928d, "ir_raw_event_handle" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x12cdfb2d, "rc_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ea16622, "ir_raw_event_store" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("pnp:dWEC1022*");
MODULE_ALIAS("acpi*:WEC1022:*");

MODULE_INFO(srcversion, "CBA63E1EAC9DE0FAD83A191");
