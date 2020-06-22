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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x6a683da4, "simple_open" },
	{ 0xf8fbfb8c, "default_llseek" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0xfa3ff314, "debugfs_create_bool" },
	{ 0xfd17c3ef, "debugfs_create_x32" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x2a14321e, "first_ec" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3C398CC723D9BFCA8B9A428");
