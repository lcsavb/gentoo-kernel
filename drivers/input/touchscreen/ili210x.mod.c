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
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcabb7f6d, "input_mt_report_pointer_emulation" },
	{ 0x3f2cb14e, "touchscreen_report_pos" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xad0cba41, "input_event" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x3f4eb6c0, "devm_device_add_group" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0xe167939a, "touchscreen_parse_properties" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Cilitek,ili210x");
MODULE_ALIAS("of:N*T*Cilitek,ili210xC*");
MODULE_ALIAS("of:N*T*Cilitek,ili251x");
MODULE_ALIAS("of:N*T*Cilitek,ili251xC*");
MODULE_ALIAS("i2c:ili210x");
MODULE_ALIAS("i2c:ili251x");

MODULE_INFO(srcversion, "B9529B03C6E56805AE11438");
