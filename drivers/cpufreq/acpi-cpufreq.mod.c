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
	{ 0xbc2031de, "acpi_processor_get_bios_limit" },
	{ 0xc289e46d, "cpufreq_generic_frequency_table_verify" },
	{ 0x9031e4eb, "cpufreq_freq_attr_scaling_available_freqs" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xdcb80ebe, "cpufreq_unregister_driver" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0x6a7c11d9, "cpufreq_register_driver" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0xf1a68107, "acpi_processor_preregister_performance" },
	{ 0x8e663d0f, "zalloc_cpumask_var_node" },
	{ 0x618911fc, "numa_node" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x7cd6f042, "cpufreq_get_current_driver" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xd6b33026, "cpu_khz" },
	{ 0xebe1c06c, "acpi_processor_notify_smm" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa9785b49, "cpu_core_map" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xfb578fc5, "memset" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe787698f, "acpi_processor_register_performance" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x294b9ea1, "on_each_cpu" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xa14b1449, "cpufreq_cpu_get_raw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0xbb13595e, "smp_call_function_many" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xbc60dc37, "cpufreq_show_cpus" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xb654ef65, "acpi_os_read_port" },
	{ 0xbe49252c, "acpi_os_write_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1ee5532, "smp_call_function_any" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x37a0cba, "kfree" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x4c07a7e0, "acpi_processor_unregister_performance" },
	{ 0xc5850110, "printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a281859, "pv_ops" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:LNXCPU:*");
MODULE_ALIAS("acpi*:ACPI0007:*");
MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0016*");
MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00E8*");

MODULE_INFO(srcversion, "F8745F494B4D2D39E16A263");
