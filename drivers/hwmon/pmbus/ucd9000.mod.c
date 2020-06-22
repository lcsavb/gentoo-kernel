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
	{ 0x6dd40f18, "simple_attr_release" },
	{ 0x761c01a2, "debugfs_attr_write" },
	{ 0x6a9222b2, "debugfs_attr_read" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x6a683da4, "simple_open" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0xb5d6aaad, "pmbus_do_remove" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0xed6cab0d, "pmbus_set_page" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x96848186, "scnprintf" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0xd30737d8, "devm_gpiochip_add_data" },
	{ 0x17475388, "_dev_warn" },
	{ 0x24b546b2, "pmbus_get_debugfs_dir" },
	{ 0xf2df93ef, "pmbus_do_probe" },
	{ 0x9294368c, "_dev_notice" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c1fc4b9, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb846183, "pmbus_get_driver_info" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xcf0b309d, "gpiochip_get_data" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0xf51a7aa3, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core,i2c-core");

MODULE_ALIAS("of:N*T*Cti,ucd9000");
MODULE_ALIAS("of:N*T*Cti,ucd9000C*");
MODULE_ALIAS("of:N*T*Cti,ucd90120");
MODULE_ALIAS("of:N*T*Cti,ucd90120C*");
MODULE_ALIAS("of:N*T*Cti,ucd90124");
MODULE_ALIAS("of:N*T*Cti,ucd90124C*");
MODULE_ALIAS("of:N*T*Cti,ucd90160");
MODULE_ALIAS("of:N*T*Cti,ucd90160C*");
MODULE_ALIAS("of:N*T*Cti,ucd9090");
MODULE_ALIAS("of:N*T*Cti,ucd9090C*");
MODULE_ALIAS("of:N*T*Cti,ucd90910");
MODULE_ALIAS("of:N*T*Cti,ucd90910C*");
MODULE_ALIAS("i2c:ucd9000");
MODULE_ALIAS("i2c:ucd90120");
MODULE_ALIAS("i2c:ucd90124");
MODULE_ALIAS("i2c:ucd90160");
MODULE_ALIAS("i2c:ucd9090");
MODULE_ALIAS("i2c:ucd90910");

MODULE_INFO(srcversion, "2E307F3E8E69E3ADF5C7F73");
