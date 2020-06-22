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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0xfef1b5ca, "device_property_present" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0xe167939a, "touchscreen_parse_properties" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x933efdaa, "device_property_read_string" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0x754d539c, "strlen" },
	{ 0x11089ac7, "_ctype" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0x17475388, "_dev_warn" },
	{ 0xd9a25476, "input_mt_sync_frame" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xad0cba41, "input_event" },
	{ 0x4d1775b1, "input_mt_assign_slots" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf155960f, "i2c_smbus_read_i2c_block_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x95b86149, "i2c_smbus_write_i2c_block_data" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x12a38747, "usleep_range" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:GSL1680:*");
MODULE_ALIAS("acpi*:GSL1688:*");
MODULE_ALIAS("acpi*:GSL3670:*");
MODULE_ALIAS("acpi*:GSL3675:*");
MODULE_ALIAS("acpi*:GSL3692:*");
MODULE_ALIAS("acpi*:MSSL1680:*");
MODULE_ALIAS("acpi*:MSSL0001:*");
MODULE_ALIAS("acpi*:MSSL0002:*");
MODULE_ALIAS("acpi*:MSSL0017:*");
MODULE_ALIAS("i2c:gsl1680");
MODULE_ALIAS("i2c:gsl1688");
MODULE_ALIAS("i2c:gsl3670");
MODULE_ALIAS("i2c:gsl3675");
MODULE_ALIAS("i2c:gsl3692");
MODULE_ALIAS("i2c:mssl1680");

MODULE_INFO(srcversion, "9648FD436AF28DE004D4C8A");
