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
	{ 0x815588a6, "clk_enable" },
	{ 0x428b829e, "sdhci_alloc_host" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5de0f237, "sdhci_resume_host" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x34c70cc6, "sdhci_add_host" },
	{ 0x29cad148, "sdhci_free_host" },
	{ 0x6a8ff0a1, "sdhci_set_clock" },
	{ 0xc5850110, "printk" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf7a529f, "sdhci_suspend_host" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x170982e2, "sdhci_reset" },
	{ 0x1a33df48, "sdhci_set_uhs_signaling" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0xb825523f, "devm_platform_ioremap_resource" },
	{ 0x266180b8, "sdhci_set_bus_width" },
	{ 0xfef1b5ca, "device_property_present" },
};

MODULE_INFO(depends, "sdhci");


MODULE_INFO(srcversion, "864931201263242865B1834");
