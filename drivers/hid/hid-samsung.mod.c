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
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00000419p00000001");
MODULE_ALIAS("hid:b0003g*v00000419p00000600");

MODULE_INFO(srcversion, "A8B0DB329AB3D1DF3D70BEC");
