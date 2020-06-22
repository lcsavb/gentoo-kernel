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
	{ 0xb5d6aaad, "pmbus_do_remove" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xf2df93ef, "pmbus_do_probe" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x9294368c, "_dev_notice" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c1fc4b9, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core,i2c-core");

MODULE_ALIAS("of:N*T*Cti,cd9200");
MODULE_ALIAS("of:N*T*Cti,cd9200C*");
MODULE_ALIAS("of:N*T*Cti,cd9220");
MODULE_ALIAS("of:N*T*Cti,cd9220C*");
MODULE_ALIAS("of:N*T*Cti,cd9222");
MODULE_ALIAS("of:N*T*Cti,cd9222C*");
MODULE_ALIAS("of:N*T*Cti,cd9224");
MODULE_ALIAS("of:N*T*Cti,cd9224C*");
MODULE_ALIAS("of:N*T*Cti,cd9240");
MODULE_ALIAS("of:N*T*Cti,cd9240C*");
MODULE_ALIAS("of:N*T*Cti,cd9244");
MODULE_ALIAS("of:N*T*Cti,cd9244C*");
MODULE_ALIAS("of:N*T*Cti,cd9246");
MODULE_ALIAS("of:N*T*Cti,cd9246C*");
MODULE_ALIAS("of:N*T*Cti,cd9248");
MODULE_ALIAS("of:N*T*Cti,cd9248C*");
MODULE_ALIAS("i2c:ucd9200");
MODULE_ALIAS("i2c:ucd9220");
MODULE_ALIAS("i2c:ucd9222");
MODULE_ALIAS("i2c:ucd9224");
MODULE_ALIAS("i2c:ucd9240");
MODULE_ALIAS("i2c:ucd9244");
MODULE_ALIAS("i2c:ucd9246");
MODULE_ALIAS("i2c:ucd9248");

MODULE_INFO(srcversion, "3C51282E4624F1D8812985C");
