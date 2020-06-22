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
	{ 0x5221c893, "idma32_dma_probe" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6d28eb20, "dw_dma_probe" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x9cc00afa, "devm_clk_get_optional" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x4fbd1c8a, "device_get_match_data" },
	{ 0x17475388, "_dev_warn" },
	{ 0xf65d065d, "dw_dma_remove" },
	{ 0xfb8df7a7, "do_dw_dma_enable" },
	{ 0x1df4137c, "acpi_dma_controller_register" },
	{ 0xfb53ad1d, "acpi_dma_controller_free" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x13857afb, "devm_kmemdup" },
	{ 0xb1bfac91, "acpi_dma_simple_xlate" },
	{ 0x6f46079, "dw_dma_filter" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa9845f04, "do_dw_dma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xb825523f, "devm_platform_ioremap_resource" },
	{ 0xa40aed48, "idma32_dma_remove" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("acpi*:INTL9C60:*");
MODULE_ALIAS("acpi*:80862286:*");
MODULE_ALIAS("acpi*:808622C0:*");
MODULE_ALIAS("acpi*:80864BB4:*");
MODULE_ALIAS("acpi*:80864BB5:*");
MODULE_ALIAS("acpi*:80864BB6:*");

MODULE_INFO(srcversion, "53594F06DF3BBF59152E294");
