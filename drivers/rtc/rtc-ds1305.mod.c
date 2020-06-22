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
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x94fb2baf, "device_set_wakeup_capable" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x3097baff, "__rtc_register_device" },
	{ 0xf5efee6d, "devm_rtc_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb7e1e25d, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x82c3710a, "spi_write_then_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "81D384CB2FB10C13D3FADEF");
