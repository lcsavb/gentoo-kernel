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
	{ 0x31d68c60, "tty_unregister_driver" },
	{ 0x89ce732e, "unregister_console" },
	{ 0x3c867e66, "register_console" },
	{ 0x1d771356, "tty_port_destroy" },
	{ 0x65c65f80, "put_tty_driver" },
	{ 0x8e1e4b64, "tty_register_driver" },
	{ 0x39755a0c, "tty_port_link_device" },
	{ 0x20061667, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x2c00a78, "tty_port_init" },
	{ 0xee06a2c0, "__tty_alloc_driver" },
	{ 0xcab222b1, "tty_port_open" },
	{ 0x55408902, "tty_port_close" },
	{ 0x7dce046c, "tty_port_hangup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F5B253AB01C338BDF703B18");
