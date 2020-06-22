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
	{ 0x55a3de79, "input_register_device" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbe7c83c9, "fwnode_handle_put" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x94e7f5f2, "fwnode_property_read_u32_array" },
	{ 0x33ff0a74, "device_get_next_child_node" },
	{ 0x4b088d38, "device_get_child_node_count" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xad0cba41, "input_event" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cmicrochip,qt1050");
MODULE_ALIAS("of:N*T*Cmicrochip,qt1050C*");

MODULE_INFO(srcversion, "B9B75C146A1BE4A230C1D47");
