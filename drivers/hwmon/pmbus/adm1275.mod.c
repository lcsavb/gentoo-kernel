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
	{ 0x76d9e258, "pmbus_read_word_data" },
	{ 0x9294368c, "_dev_notice" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2df93ef, "pmbus_do_probe" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x2c1fc4b9, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x425e024b, "pmbus_read_byte_data" },
	{ 0xf61be212, "pmbus_write_word_data" },
	{ 0xbb846183, "pmbus_get_driver_info" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xd06095e5, "i2c_smbus_write_word_data" },
	{ 0xfda0da5b, "i2c_smbus_read_word_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core,i2c-core");

MODULE_ALIAS("i2c:adm1075");
MODULE_ALIAS("i2c:adm1272");
MODULE_ALIAS("i2c:adm1275");
MODULE_ALIAS("i2c:adm1276");
MODULE_ALIAS("i2c:adm1278");
MODULE_ALIAS("i2c:adm1293");
MODULE_ALIAS("i2c:adm1294");

MODULE_INFO(srcversion, "641C9B561B4CBD0067FE64B");
