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
	{ 0xd9a25476, "input_mt_sync_frame" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xf9a8c43e, "input_mt_get_slot_by_key" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xad0cba41, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8799010, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0x9dba1d92, "input_alloc_absinfo" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x70edc336, "devm_gpiod_get_index" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xcebe7641, "spi_setup" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:MSHW0037:*");

MODULE_INFO(srcversion, "C757A726CE279D1A15A9663");
