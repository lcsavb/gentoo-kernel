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
	{ 0xc289e46d, "cpufreq_generic_frequency_table_verify" },
	{ 0xdcb80ebe, "cpufreq_unregister_driver" },
	{ 0x6a7c11d9, "cpufreq_register_driver" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xc5850110, "printk" },
	{ 0x2b67f096, "speedstep_get_frequency" },
	{ 0xc9216a82, "recalibrate_cpu_khz" },
	{ 0xd7ab2c0c, "speedstep_detect_processor" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "speedstep-lib");


MODULE_INFO(srcversion, "CF6F364A48F43A7F7DCEFCD");
