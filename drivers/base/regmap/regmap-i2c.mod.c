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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x19b68e53, "__devm_regmap_init" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xf155960f, "i2c_smbus_read_i2c_block_data" },
	{ 0xd06095e5, "i2c_smbus_write_word_data" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0xfda0da5b, "i2c_smbus_read_word_data" },
	{ 0x27e319c4, "__regmap_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x531fec40, "regmap_get_val_endian" },
	{ 0x95b86149, "i2c_smbus_write_i2c_block_data" },
};

MODULE_INFO(depends, "i2c-core");


MODULE_INFO(srcversion, "E09B29EA17684C34C201C48");
