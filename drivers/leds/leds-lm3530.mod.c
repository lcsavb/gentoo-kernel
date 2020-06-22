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
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:lm3530-led");

MODULE_INFO(srcversion, "F5BE99D5ED39E5E005F7E75");
