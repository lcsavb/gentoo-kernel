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
	{ 0xf9a482f9, "msleep" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x7b161289, "input_unregister_polled_device" },
	{ 0x71301392, "param_get_int" },
	{ 0xec34ca6b, "pm_runtime_barrier" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x8b09348e, "input_register_polled_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0xf89fe065, "param_set_int" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xad0cba41, "input_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2e76b019, "misc_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x95536bb7, "fasync_helper" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xb0aad46c, "input_free_polled_device" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe4d4e6c1, "pm_schedule_suspend" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x36bf2262, "input_allocate_polled_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x566257fc, "kill_fasync" },
	{ 0x867234, "misc_deregister" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "input-polldev");


MODULE_INFO(srcversion, "C8EA23A742D257CE7CE3DE1");
