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
	{ 0xc8107e62, "v4l2_ctrl_subdev_log_status" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x62e3764, "au8522_readreg" },
	{ 0xdf6609d7, "au8522_writereg" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x8949f7df, "media_entity_pads_init" },
	{ 0x97e9a2ac, "v4l2_i2c_subdev_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xac5158a3, "au8522_get_state" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97051b0f, "au8522_release_state" },
	{ 0xb48a8933, "v4l2_ctrl_handler_free" },
	{ 0x1301a63a, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,i2c-core,au8522_common,mc");

MODULE_ALIAS("i2c:au8522");

MODULE_INFO(srcversion, "F3D48EA2D9A1B09B0F65E39");
