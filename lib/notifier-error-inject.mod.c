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
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xf42c6c41, "simple_attr_read" },
	{ 0xc5850110, "printk" },
	{ 0x6dd40f18, "simple_attr_release" },
	{ 0xf51a7aa3, "simple_attr_open" },
	{ 0x489c7973, "simple_attr_write" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0AFFA6CE11953C4313137F7");
