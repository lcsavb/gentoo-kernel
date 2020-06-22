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
	{ 0xfa1eb910, "unregister_syscore_ops" },
	{ 0x4c07a7e0, "acpi_processor_unregister_performance" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x14ef8b63, "acpi_processor_get_performance_info" },
	{ 0xf1a68107, "acpi_processor_preregister_performance" },
	{ 0x8e663d0f, "zalloc_cpumask_var_node" },
	{ 0x618911fc, "numa_node" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xfb578fc5, "memset" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xa963a5d5, "processors" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x34a1f7e3, "acpi_processor_get_psd" },
	{ 0x99430ba2, "acpi_get_phys_id" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x42578e80, "acpi_get_type" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4B11B96773DB4A9A8B5C706");
