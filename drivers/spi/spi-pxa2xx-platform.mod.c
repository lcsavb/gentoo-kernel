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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf4e1c6b6, "pci_bus_type" },
	{ 0x815588a6, "clk_enable" },
	{ 0xcb328937, "gpiod_direction_output" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x32d5a1b9, "pci_match_id" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x4477eb34, "devm_spi_register_controller" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xeb0b27aa, "__spi_alloc_controller" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0x17475388, "_dev_warn" },
	{ 0x6783a2db, "dma_request_slave_channel" },
	{ 0x70edc336, "devm_gpiod_get_index" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcb10622b, "__dma_request_channel" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x68ad600a, "spi_finalize_current_transfer" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0xb44c9324, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0xdcdf8c4b, "gpiod_count" },
	{ 0x64d17103, "spi_controller_suspend" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xd2356b4d, "spi_controller_resume" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x6adf9e76, "gpiod_put" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT33C0:*");
MODULE_ALIAS("acpi*:INT33C1:*");
MODULE_ALIAS("acpi*:INT3430:*");
MODULE_ALIAS("acpi*:INT3431:*");
MODULE_ALIAS("acpi*:80860F0E:*");
MODULE_ALIAS("acpi*:8086228E:*");
MODULE_ALIAS("of:N*T*Cmarvell,mmp2-ssp");
MODULE_ALIAS("of:N*T*Cmarvell,mmp2-sspC*");

MODULE_INFO(srcversion, "9CF0CC1CCC3A0ED24C08712");
