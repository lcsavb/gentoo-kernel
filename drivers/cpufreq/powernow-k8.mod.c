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
	{ 0xd826c652, "cpufreq_generic_attr" },
	{ 0xbc2031de, "acpi_processor_get_bios_limit" },
	{ 0xc289e46d, "cpufreq_generic_frequency_table_verify" },
	{ 0xdcb80ebe, "cpufreq_unregister_driver" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x944c43f, "node_states" },
	{ 0x5a921311, "strncmp" },
	{ 0xa916b694, "strnlen" },
	{ 0x754d539c, "strlen" },
	{ 0x7cd6f042, "cpufreq_get_current_driver" },
	{ 0x6a7c11d9, "cpufreq_register_driver" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1df6b0f6, "cpufreq_freq_transition_end" },
	{ 0xa94f25e8, "cpufreq_freq_transition_begin" },
	{ 0xaf40a0a7, "cpufreq_cpu_put" },
	{ 0xe5f083e9, "cpufreq_cpu_get" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0xebe1c06c, "acpi_processor_notify_smm" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa9785b49, "cpu_core_map" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4c07a7e0, "acpi_processor_unregister_performance" },
	{ 0xe787698f, "acpi_processor_register_performance" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf82f3657, "work_on_cpu" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x1a281859, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0002fam000Fmod*:feature:*");

MODULE_INFO(srcversion, "15244DF0DA68648C152680F");
