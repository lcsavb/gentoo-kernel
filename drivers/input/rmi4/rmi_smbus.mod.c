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
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x2c1fc4b9, "i2c_smbus_read_block_data" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb90fcdab, "rmi_dbg" },
	{ 0xe2d77822, "i2c_smbus_write_block_data" },
	{ 0xa264cf76, "rmi_unregister_transport_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x53d4cd37, "rmi_driver_suspend" },
	{ 0x17475388, "_dev_warn" },
	{ 0xac91dc9c, "rmi_driver_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,rmi_core");

MODULE_ALIAS("i2c:rmi4_smbus");

MODULE_INFO(srcversion, "F80A73BEF64D37823C0DA8C");
