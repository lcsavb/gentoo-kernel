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
	{ 0xf2e98682, "usb_hcd_pci_pm_ops" },
	{ 0x4378caa4, "usb_hcd_pci_shutdown" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xf273ed11, "xhci_init_driver" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0x60d6e001, "usb_add_hcd" },
	{ 0xcb3f295e, "xhci_ext_cap_init" },
	{ 0x2693ce9e, "usb_create_shared_hcd" },
	{ 0xba118c8a, "usb_hcd_pci_probe" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x6dd96a89, "pci_set_mwi" },
	{ 0x36cfad78, "xhci_gen_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x92d8e56f, "__tracepoint_xhci_dbg_quirks" },
	{ 0xaf4014ff, "usb_amd_quirk_pll_check" },
	{ 0xfe1483a0, "xhci_dbg_trace" },
	{ 0xa6e9bd1c, "pci_d3cold_disable" },
	{ 0x9e446f40, "xhci_suspend" },
	{ 0xd53d7b9f, "usb_enable_intel_xhci_ports" },
	{ 0x5b9eec53, "xhci_resume" },
	{ 0x6da0bcb1, "xhci_shutdown" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0xece83274, "usb_hcd_pci_remove" },
	{ 0xb5fdaf62, "usb_put_hcd" },
	{ 0xbbe4d611, "usb_remove_hcd" },
	{ 0xf42961f9, "usb_hcd_is_primary_hcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xhci-hcd");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i30*");

MODULE_INFO(srcversion, "F0352BAEACEB39ADB201EBA");
