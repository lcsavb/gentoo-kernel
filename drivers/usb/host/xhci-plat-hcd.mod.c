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
	{ 0xf4e1c6b6, "pci_bus_type" },
	{ 0x815588a6, "clk_enable" },
	{ 0x60d6e001, "usb_add_hcd" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xbbe4d611, "usb_remove_hcd" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x6d8b6a57, "__usb_create_hcd" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0x9cc00afa, "devm_clk_get_optional" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xb5fdaf62, "usb_put_hcd" },
	{ 0xf273ed11, "xhci_init_driver" },
	{ 0xf42961f9, "usb_hcd_is_primary_hcd" },
	{ 0xa373c40c, "xhci_run" },
	{ 0x5b9eec53, "xhci_resume" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x989d039e, "device_wakeup_enable" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x803527dc, "devm_usb_get_phy_by_phandle" },
	{ 0x36cfad78, "xhci_gen_setup" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x9e446f40, "xhci_suspend" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xdb51be0, "usb_hcd_platform_shutdown" },
	{ 0xfef1b5ca, "device_property_present" },
};

MODULE_INFO(depends, "xhci-hcd");

MODULE_ALIAS("acpi*:PNP0D10:*");

MODULE_INFO(srcversion, "EF91C5519788106B83212F3");
