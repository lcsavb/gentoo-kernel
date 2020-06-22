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
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xc5850110, "printk" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0xbb35675b, "__bitmap_intersects" },
	{ 0x17475388, "_dev_warn" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x8b360d50, "pci_get_domain_bus_and_slot" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x81834404, "devm_hwmon_device_register_with_groups" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x4507f4a8, "cpuhp_tasks_frozen" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C0*");

MODULE_INFO(srcversion, "6D76D1E905A75D8EB65BD89");
