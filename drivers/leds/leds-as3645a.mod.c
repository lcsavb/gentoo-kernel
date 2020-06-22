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
	{ 0x5e298310, "led_classdev_flash_register_ext" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94e7f5f2, "fwnode_property_read_u32_array" },
	{ 0x3a7cee9b, "fwnode_handle_get" },
	{ 0xdaaf0a52, "fwnode_get_next_child_node" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc24a36af, "dev_fwnode" },
	{ 0xbe7c83c9, "fwnode_handle_put" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x10f9ea19, "led_classdev_flash_unregister" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,led-class-flash");

MODULE_ALIAS("of:N*T*Cams,as3645a");
MODULE_ALIAS("of:N*T*Cams,as3645aC*");
MODULE_ALIAS("i2c:as3645a");

MODULE_INFO(srcversion, "6DCBFE833EF7B9892D1292C");
