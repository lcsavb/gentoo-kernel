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
	{ 0x544dbdb, "phy_init" },
	{ 0x5ddd724a, "ata_dummy_port_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x20fb0c18, "ahci_save_initial_config" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x50ecfaf4, "ata_host_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4e4bc6d4, "ahci_reset_em" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x7fb1bd08, "ata_host_resume" },
	{ 0xcbfbfa6a, "phy_set_mode_ext" },
	{ 0xfeeecb5e, "ata_port_desc" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xf80068a1, "ata_host_alloc_pinfo" },
	{ 0xe68fefc0, "phy_power_off" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb511a85, "ahci_print_info" },
	{ 0xcd59fbbe, "devres_open_group" },
	{ 0x279b3dbc, "phy_power_on" },
	{ 0xfdf56f26, "__devres_alloc_node" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0xe38aa59d, "ahci_reset_controller" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0x50291e72, "phy_exit" },
	{ 0x51c5871e, "ahci_host_activate" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc2660b, "ahci_init_controller" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xce063196, "devm_reset_control_array_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x84fe7b9e, "devres_add" },
	{ 0x500e289c, "ahci_set_em_messages" },
	{ 0x572c9830, "clk_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xb7adb7ca, "regulator_put" },
	{ 0x13b5a329, "devm_of_phy_get" },
	{ 0xdaee66fb, "devres_remove_group" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x9e1761c4, "regulator_get" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x6d49c604, "devres_release_group" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0x97c99936, "ahci_ops" },
};

MODULE_INFO(depends, "libahci");


MODULE_INFO(srcversion, "333523289ECBA528464FBF8");
