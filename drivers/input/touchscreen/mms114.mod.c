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
	{ 0x42a508e0, "_dev_info" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcabb7f6d, "input_mt_report_pointer_emulation" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xad0cba41, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:mms114");

MODULE_INFO(srcversion, "11C3485AC6D05BB2AB80B23");
