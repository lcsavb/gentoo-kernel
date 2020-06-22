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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xd1e8bffb, "param_ops_byte" },
	{ 0xda584c89, "single_release" },
	{ 0xae254cfe, "seq_read" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x163fd2fa, "watchdog_unregister_device" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x40120314, "single_open" },
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb13deae8, "watchdog_register_device" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4E148B6EE06B1ED305A0CCA");
