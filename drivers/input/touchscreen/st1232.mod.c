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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xe167939a, "touchscreen_parse_properties" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4fbd1c8a, "device_get_match_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x90a0e044, "dev_pm_qos_remove_request" },
	{ 0x96ac1fbc, "dev_pm_qos_add_ancestor_request" },
	{ 0xad0cba41, "input_event" },
	{ 0x3f2cb14e, "touchscreen_report_pos" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Csitronix,st1232");
MODULE_ALIAS("of:N*T*Csitronix,st1232C*");
MODULE_ALIAS("of:N*T*Csitronix,st1633");
MODULE_ALIAS("of:N*T*Csitronix,st1633C*");
MODULE_ALIAS("i2c:st1232-ts");
MODULE_ALIAS("i2c:st1633-ts");

MODULE_INFO(srcversion, "AE986437452ED39F3C529B6");
