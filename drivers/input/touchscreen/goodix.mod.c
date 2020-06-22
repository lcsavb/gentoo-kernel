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
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0x13317307, "devm_kasprintf" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xd9a25476, "input_mt_sync_frame" },
	{ 0x3f2cb14e, "touchscreen_report_pos" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xad0cba41, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xfd94814e, "complete_all" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xe167939a, "touchscreen_parse_properties" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x17475388, "_dev_warn" },
	{ 0x9dba1d92, "input_alloc_absinfo" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xbd4f8c4a, "gpiod_direction_input" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcb328937, "gpiod_direction_output" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:GDIX1001:*");
MODULE_ALIAS("acpi*:GDIX1002:*");
MODULE_ALIAS("i2c:GDIX1001:00");

MODULE_INFO(srcversion, "9964509A9A9A679D182C87A");
