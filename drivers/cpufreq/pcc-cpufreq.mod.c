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
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xdcb80ebe, "cpufreq_unregister_driver" },
	{ 0x6a7c11d9, "cpufreq_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5850110, "printk" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xf10de535, "ioread8" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x7cd6f042, "cpufreq_get_current_driver" },
	{ 0x1a281859, "pv_ops" },
	{ 0x1df6b0f6, "cpufreq_freq_transition_end" },
	{ 0xc5534d64, "ioread16" },
	{ 0x7bb50b88, "acpi_write" },
	{ 0x67c13ea0, "acpi_read" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa94f25e8, "cpufreq_freq_transition_begin" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe484e35f, "ioread32" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa963a5d5, "processors" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:LNXCPU:*");
MODULE_ALIAS("acpi*:ACPI0007:*");

MODULE_INFO(srcversion, "7F0DA56F5C09A5E93BD0B20");
