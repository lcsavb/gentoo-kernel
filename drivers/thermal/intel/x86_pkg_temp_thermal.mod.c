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
	{ 0x3d38ff95, "module_layout" },
	{ 0x374a1918, "param_ops_int" },
	{ 0x988ba22f, "debugfs_remove_recursive" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xca4416b0, "debugfs_create_u32" },
	{ 0xcfdb95cf, "debugfs_create_dir" },
	{ 0x8a7cb9c4, "platform_thermal_package_rate_control" },
	{ 0x90de0452, "platform_thermal_package_notify" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x1024dd90, "thermal_zone_device_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf9898015, "kmem_cache_alloc_trace" },
	{ 0xc3095f9a, "kmalloc_caches" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x41b92f49, "thermal_zone_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8df7e8d6, "cpumask_any_but" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdb2f4bd7, "thermal_zone_device_update" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x386534a3, "pv_ops" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C6*");

MODULE_INFO(srcversion, "A8DE17362AB6449554E4EAC");
