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
	{ 0x6dd40f18, "simple_attr_release" },
	{ 0x489c7973, "simple_attr_write" },
	{ 0xf42c6c41, "simple_attr_read" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x6a683da4, "simple_open" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1677e7f5, "desc_to_gpio" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0xfd6a73ea, "debugfs_create_u16" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x3f4eb6c0, "devm_device_add_group" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0xe167939a, "touchscreen_parse_properties" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0x754d539c, "strlen" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x349cba85, "strchr" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x4fbd1c8a, "device_get_match_data" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xcabb7f6d, "input_mt_report_pointer_emulation" },
	{ 0x3f2cb14e, "touchscreen_report_pos" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xad0cba41, "input_event" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xf51a7aa3, "simple_attr_open" },
	{ 0x17475388, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x96848186, "scnprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "06422841A4D8BC3FF8243FD");
