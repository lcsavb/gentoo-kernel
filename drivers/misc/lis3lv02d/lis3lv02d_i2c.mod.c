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
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0xda472d87, "lis3lv02d_init_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0x52de0a54, "regulator_bulk_get" },
	{ 0xf155960f, "i2c_smbus_read_i2c_block_data" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0xa18edc27, "regulator_bulk_free" },
	{ 0x206a8607, "lis3lv02d_remove_fs" },
	{ 0x82b81def, "lis3_dev" },
	{ 0x903609fb, "lis3lv02d_joystick_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd7d4d2ca, "lis3lv02d_poweroff" },
	{ 0xf5ded7a2, "lis3lv02d_poweron" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,lis3lv02d");

MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");

MODULE_INFO(srcversion, "17622676139ADA78D5A062E");
