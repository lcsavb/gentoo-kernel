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
	{ 0x29361773, "complete" },
	{ 0xd9a25476, "input_mt_sync_frame" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xad0cba41, "input_event" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x3f4eb6c0, "devm_device_add_group" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0x9dba1d92, "input_alloc_absinfo" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0xaa92d4c6, "i2c_smbus_xfer" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x17475388, "_dev_warn" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:ELAN0001:*");
MODULE_ALIAS("i2c:elants_i2c");

MODULE_INFO(srcversion, "4BF207CF353EB92CD28FAC4");
