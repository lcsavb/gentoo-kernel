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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0xdce39f31, "intel_soc_dts_iosf_init" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x2ecfcfbc, "powercap_register_control_type" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x73f3d935, "rapl_add_package" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xe919636a, "thermal_zone_device_update" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x274a25f4, "sysfs_create_file_ns" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xfdf4ba51, "rapl_remove_package" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x93e20211, "rapl_find_package_domain" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x72e5792b, "int340x_thermal_zone_add" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x13756d97, "intel_soc_dts_iosf_interrupt_handler" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x826840c6, "powercap_unregister_control_type" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xcde11222, "intel_soc_dts_iosf_exit" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x1b069d36, "sysfs_remove_file_ns" },
	{ 0xaa9ee2d3, "int340x_thermal_zone_remove" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x17475388, "_dev_warn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a281859, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_soc_dts_iosf,intel_rapl_common,int340x_thermal_zone");

MODULE_ALIAS("acpi*:INT3401:*");
MODULE_ALIAS("pci:v00008086d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E83sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000318Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008A03sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "015793DBEB9E5E455CBE5B5");
