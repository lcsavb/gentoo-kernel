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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xdecb5a4c, "v4l2_async_register_subdev" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xfa919ff6, "v4l2_ctrl_new_std_menu_items" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x97e9a2ac, "v4l2_i2c_subdev_init" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0x7827faf5, "v4l2_async_unregister_subdev" },
	{ 0x21cdeda5, "v4l2_ctrl_handler_setup" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x6d0da757, "media_device_unregister_entity" },
	{ 0x24af49bc, "media_create_pad_link" },
	{ 0x568196c3, "media_device_register_entity" },
	{ 0x8949f7df, "media_entity_pads_init" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xf8d01167, "v4l2_subdev_notify_event" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,videodev,regmap-i2c,mc");

MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "70829B65CC3343BC04AA06D");
