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
	{ 0x70edc336, "devm_gpiod_get_index" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x94fb2baf, "device_set_wakeup_capable" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0x256446e8, "devm_regulator_get_optional" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x38367274, "pm_stay_awake" },
	{ 0xa2413051, "pm_relax" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
	{ 0xd4064b26, "input_mt_report_finger_count" },
	{ 0xd9a25476, "input_mt_sync_frame" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xad0cba41, "input_event" },
	{ 0x29361773, "complete" },
	{ 0xb31a754a, "pm_wakeup_dev_event" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:zforce-ts");

MODULE_INFO(srcversion, "DFD59CC08C0B9B433AF8B08");
