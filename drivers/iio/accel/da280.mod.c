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
	{ 0xab06bf8b, "_dev_err" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xfda0da5b, "i2c_smbus_read_word_data" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio");

MODULE_ALIAS("i2c:da226");
MODULE_ALIAS("i2c:da280");
MODULE_ALIAS("acpi*:MIRAACC:*");

MODULE_INFO(srcversion, "E9B7EE8E2993D967FC14793");
