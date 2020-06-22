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
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x1b843b6a, "i2c_acpi_find_bus_speed" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xbafee35, "i2c_dw_probe" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x519a034c, "set_primary_fwnode" },
	{ 0x1b715cd8, "i2c_detect_slave_mode" },
	{ 0x4e39926a, "i2c_dw_read_comp_param" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9cc00afa, "devm_clk_get_optional" },
	{ 0xde5e47, "__devm_reset_control_get" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x4fbd1c8a, "device_get_match_data" },
	{ 0xc8462350, "i2c_parse_fw_timings" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x151a2b76, "i2c_dw_prepare_clk" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x86f27420, "iosf_mbi_block_punit_i2c_access" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x44414ff2, "iosf_mbi_unblock_punit_i2c_access" },
	{ 0x90f8f77f, "i2c_dw_probe_slave" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbead065b, "is_acpi_device_node" },
};

MODULE_INFO(depends, "i2c-core,i2c-designware-core");

MODULE_ALIAS("acpi*:INT33C2:*");
MODULE_ALIAS("acpi*:INT33C3:*");
MODULE_ALIAS("acpi*:INT3432:*");
MODULE_ALIAS("acpi*:INT3433:*");
MODULE_ALIAS("acpi*:80860F41:*");
MODULE_ALIAS("acpi*:808622C1:*");
MODULE_ALIAS("acpi*:AMD0010:*");
MODULE_ALIAS("acpi*:AMDI0010:*");
MODULE_ALIAS("acpi*:AMDI0510:*");
MODULE_ALIAS("acpi*:APMC0D0F:*");
MODULE_ALIAS("acpi*:HISI02A1:*");
MODULE_ALIAS("acpi*:HISI02A2:*");

MODULE_INFO(srcversion, "70ED7083C632881C27ACF8D");
