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
	{ 0x1a33df48, "sdhci_set_uhs_signaling" },
	{ 0x170982e2, "sdhci_reset" },
	{ 0x266180b8, "sdhci_set_bus_width" },
	{ 0x6a8ff0a1, "sdhci_set_clock" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xb1e93bfa, "sdhci_remove_host" },
	{ 0x17475388, "_dev_warn" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x28f03b33, "sdhci_cleanup_host" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0x29cad148, "sdhci_free_host" },
	{ 0x4a156909, "__sdhci_add_host" },
	{ 0xb2b59b87, "sdhci_setup_host" },
	{ 0x78af973d, "mmc_gpiod_request_cd" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc6dcbeba, "devm_ioremap_nocache" },
	{ 0x428b829e, "sdhci_alloc_host" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0xe977be6b, "acpi_device_fix_up_power" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe8c65967, "sdhci_start_signal_voltage_switch" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcfe3b8bc, "mmc_gpio_get_cd" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc3d00ddc, "acpi_device_hid" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xd865b6b1, "__sdhci_read_caps" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9b3e5d50, "sdhci_set_ios" },
	{ 0xf7a529f, "sdhci_suspend_host" },
	{ 0x5de0f237, "sdhci_resume_host" },
	{ 0xe2f2f0b6, "sdhci_runtime_suspend_host" },
	{ 0xe53665e0, "sdhci_runtime_resume_host" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sdhci,mmc_core");

MODULE_ALIAS("acpi*:80865ACA:*");
MODULE_ALIAS("acpi*:80865ACC:*");
MODULE_ALIAS("acpi*:80865AD0:*");
MODULE_ALIAS("acpi*:80860F14:*");
MODULE_ALIAS("acpi*:80860F16:*");
MODULE_ALIAS("acpi*:INT33BB:*");
MODULE_ALIAS("acpi*:INT33C6:*");
MODULE_ALIAS("acpi*:INT3436:*");
MODULE_ALIAS("acpi*:INT344D:*");
MODULE_ALIAS("acpi*:PNP0D40:*");
MODULE_ALIAS("acpi*:QCOM8051:*");
MODULE_ALIAS("acpi*:QCOM8052:*");
MODULE_ALIAS("acpi*:AMDI0040:*");

MODULE_INFO(srcversion, "3B0B6438460FA3C13A80666");
