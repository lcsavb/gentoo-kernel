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
	{ 0x9aff9833, "adt7x10_dev_pm_ops" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0xfda0da5b, "i2c_smbus_read_word_data" },
	{ 0xd06095e5, "i2c_smbus_write_word_data" },
	{ 0x6b38194e, "adt7x10_probe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5f54b030, "adt7x10_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adt7x10,i2c-core");

MODULE_ALIAS("i2c:adt7410");
MODULE_ALIAS("i2c:adt7420");

MODULE_INFO(srcversion, "073B83A58DF6DBD802AEECE");
