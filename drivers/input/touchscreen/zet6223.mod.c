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
	{ 0x17475388, "_dev_warn" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0xe167939a, "touchscreen_parse_properties" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9a25476, "input_mt_sync_frame" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xad0cba41, "input_event" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:zet6223");
MODULE_ALIAS("of:N*T*Czeitec,zet6223");
MODULE_ALIAS("of:N*T*Czeitec,zet6223C*");

MODULE_INFO(srcversion, "8801F202BAAC70BEC1300E2");
