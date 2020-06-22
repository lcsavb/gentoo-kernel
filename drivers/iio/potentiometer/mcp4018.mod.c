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
	{ 0xc501cc3c, "i2c_smbus_read_byte" },
	{ 0x76d60d47, "i2c_smbus_write_byte" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x5197e8b1, "__devm_iio_device_register" },
	{ 0x95eb8d79, "i2c_match_id" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio");

MODULE_ALIAS("i2c:mcp4017-502");
MODULE_ALIAS("i2c:mcp4017-103");
MODULE_ALIAS("i2c:mcp4017-503");
MODULE_ALIAS("i2c:mcp4017-104");
MODULE_ALIAS("i2c:mcp4018-502");
MODULE_ALIAS("i2c:mcp4018-103");
MODULE_ALIAS("i2c:mcp4018-503");
MODULE_ALIAS("i2c:mcp4018-104");
MODULE_ALIAS("i2c:mcp4019-502");
MODULE_ALIAS("i2c:mcp4019-103");
MODULE_ALIAS("i2c:mcp4019-503");
MODULE_ALIAS("i2c:mcp4019-104");

MODULE_INFO(srcversion, "C780CB3B4683D21250264FB");
