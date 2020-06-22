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
	{ 0x2733537f, "v4l2_event_subdev_unsubscribe" },
	{ 0x3a31f89a, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xc8107e62, "v4l2_ctrl_subdev_log_status" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xdecb5a4c, "v4l2_async_register_subdev" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x8949f7df, "media_entity_pads_init" },
	{ 0xfa919ff6, "v4l2_ctrl_new_std_menu_items" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x97e9a2ac, "v4l2_i2c_subdev_init" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcb328937, "gpiod_direction_output" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x74bd2c03, "__v4l2_ctrl_handler_setup" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1301a63a, "v4l2_device_unregister_subdev" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0x7827faf5, "v4l2_async_unregister_subdev" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,i2c-core,mc");

MODULE_ALIAS("of:N*T*Covti,ov2640");
MODULE_ALIAS("of:N*T*Covti,ov2640C*");
MODULE_ALIAS("i2c:ov2640");

MODULE_INFO(srcversion, "EEC7FEE284BB9A544E190F7");
