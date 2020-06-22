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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d1775b1, "input_mt_assign_slots" },
	{ 0xf9a8c43e, "input_mt_get_slot_by_key" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
	{ 0xd9a25476, "input_mt_sync_frame" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xad0cba41, "input_event" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:pixcir_ts");
MODULE_ALIAS("i2c:pixcir_tangoc");

MODULE_INFO(srcversion, "6B8A2E1DB03E419801775F8");
