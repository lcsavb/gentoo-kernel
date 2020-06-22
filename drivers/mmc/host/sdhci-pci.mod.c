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
	{ 0x1cf66f7e, "cqhci_resume" },
	{ 0xdd151605, "sdhci_enable_v4_mode" },
	{ 0xb1e93bfa, "sdhci_remove_host" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37692c6a, "sdhci_set_power" },
	{ 0xc2ba46e7, "mmc_detect_change" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0x639aac4b, "sdhci_cqe_enable" },
	{ 0x9bce428b, "mmc_send_tuning" },
	{ 0x428b829e, "sdhci_alloc_host" },
	{ 0x5de0f237, "sdhci_resume_host" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x28f03b33, "sdhci_cleanup_host" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0xe977be6b, "acpi_device_fix_up_power" },
	{ 0x6d253dca, "dmi_match" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0x34c70cc6, "sdhci_add_host" },
	{ 0x29cad148, "sdhci_free_host" },
	{ 0xb3ce5585, "devm_gpio_free" },
	{ 0xf8b9ff7d, "sdhci_execute_tuning" },
	{ 0xd37aaea2, "sdhci_start_tuning" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x17475388, "_dev_warn" },
	{ 0x6a8ff0a1, "sdhci_set_clock" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0xbc605c0b, "sdhci_abort_tuning" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x9d4269f3, "sdhci_reset_tuning" },
	{ 0x4a156909, "__sdhci_add_host" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x68effd68, "sdhci_cqe_disable" },
	{ 0x62401fb5, "sdhci_dumpregs" },
	{ 0xc0e45cc6, "cqhci_suspend" },
	{ 0xbd4f8c4a, "gpiod_direction_input" },
	{ 0xb2b59b87, "sdhci_setup_host" },
	{ 0xc6e87f40, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x989d039e, "device_wakeup_enable" },
	{ 0xe2f2f0b6, "sdhci_runtime_suspend_host" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xe53665e0, "sdhci_runtime_resume_host" },
	{ 0xb01b9d62, "pci_find_capability" },
	{ 0xe90e6d09, "device_wakeup_disable" },
	{ 0xf7a529f, "sdhci_suspend_host" },
	{ 0xcfe3b8bc, "mmc_gpio_get_cd" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xcb15eee9, "sdhci_pci_get_data" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcdc3c3c5, "mmc_gpio_set_cd_wake" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0xbd3d11ce, "sdhci_calc_clk" },
	{ 0x170982e2, "sdhci_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f5e1029, "cqhci_irq" },
	{ 0x1a33df48, "sdhci_set_uhs_signaling" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x7856b2f4, "gpiod_set_raw_value_cansleep" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x4a507c38, "cqhci_init" },
	{ 0x78af973d, "mmc_gpiod_request_cd" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xed238834, "devm_gpio_request" },
	{ 0xe8c65967, "sdhci_start_signal_voltage_switch" },
	{ 0x76ebd413, "sdhci_cqe_irq" },
	{ 0xcb715abb, "sdhci_send_tuning" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x266180b8, "sdhci_set_bus_width" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xabadba1c, "sdhci_end_tuning" },
};

MODULE_INFO(depends, "cqhci,sdhci,mmc_core");

MODULE_ALIAS("pci:v00001180d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d00000843sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000550sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000551sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002382sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002391sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d000095D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000084Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000880Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv00001093sd00007884bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F16sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002294sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002295sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002296sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DF5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A375sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DF8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016E6d00000670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000C202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017A0d00009750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017A0d00009755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc08sc05i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc08sc05i*");

MODULE_INFO(srcversion, "518E9D8B91050749C61EFF9");
