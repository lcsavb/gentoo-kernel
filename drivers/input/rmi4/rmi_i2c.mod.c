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
	{ 0x7a327ad4, "rmi_register_transport_device" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb90fcdab, "rmi_dbg" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0xa264cf76, "rmi_unregister_transport_device" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0x53d4cd37, "rmi_driver_suspend" },
	{ 0x17475388, "_dev_warn" },
	{ 0xac91dc9c, "rmi_driver_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,rmi_core");

MODULE_ALIAS("i2c:rmi4_i2c");

MODULE_INFO(srcversion, "3411AB1DB5FC0834A761A26");
