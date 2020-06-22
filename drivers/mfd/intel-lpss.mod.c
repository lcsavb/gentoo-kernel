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
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0xe8d32f6a, "mfd_remove_devices" },
	{ 0x7eaa3f16, "clk_register_fractional_divider" },
	{ 0xe0925d74, "dev_pm_qos_hide_latency_tolerance" },
	{ 0xfd17c3ef, "debugfs_create_x32" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x17475388, "_dev_warn" },
	{ 0x5f5897ee, "mfd_add_devices" },
	{ 0xffb7c514, "ida_free" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x8581fb1, "clk_register_fixed_rate" },
	{ 0x13857afb, "devm_kmemdup" },
	{ 0x2e29fe3, "device_for_each_child_reverse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6285a072, "devm_ioremap" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0x272b4e9, "clkdev_drop" },
	{ 0x3b47a4d, "clkdev_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f284048, "dev_pm_qos_expose_latency_tolerance" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x92295424, "clk_register_gate" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "mfd-core");


MODULE_INFO(srcversion, "55CD008DC919ABBCD00E1A9");
