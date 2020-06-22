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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb1e93bfa, "sdhci_remove_host" },
	{ 0x38642d7d, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x81188c30, "match_string" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x6e2dd152, "sdhci_pltfm_init" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x45dfc5c4, "sdhci_set_power_noreg" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x88d4678a, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7c218582, "sdhci_enable_sdio_irq" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xf709a722, "mmc_of_parse" },
	{ 0xb5acea0a, "sdhci_pltfm_clk_get_max_clock" },
	{ 0x34c70cc6, "sdhci_add_host" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xf8b9ff7d, "sdhci_execute_tuning" },
	{ 0x17475388, "_dev_warn" },
	{ 0x6a8ff0a1, "sdhci_set_clock" },
	{ 0x9eaeda42, "sdhci_get_property" },
	{ 0x9b3e5d50, "sdhci_set_ios" },
	{ 0xe2f2f0b6, "sdhci_runtime_suspend_host" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xe53665e0, "sdhci_runtime_resume_host" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xedcd9ce4, "mmc_regulator_set_ocr" },
	{ 0xb9f541aa, "sdhci_pltfm_free" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x170982e2, "sdhci_reset" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe8c65967, "sdhci_start_signal_voltage_switch" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x266180b8, "sdhci_set_bus_width" },
};

MODULE_INFO(depends, "sdhci,sdhci-pltfm,mmc_core");

MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhciC*");

MODULE_INFO(srcversion, "6C93666D734A85C9C3C289E");
