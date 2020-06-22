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
	{ 0x8c71f7ca, "gpiochip_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0xd17ba9c4, "gpiochip_add_data_with_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x1a281859, "pv_ops" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcf0b309d, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "825B1038ADCA2136E38A0B9");
