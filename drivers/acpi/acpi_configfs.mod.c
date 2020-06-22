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
	{ 0x15906367, "configfs_unregister_subsystem" },
	{ 0xf65c776e, "configfs_unregister_default_group" },
	{ 0xcbff7b2, "configfs_register_default_group" },
	{ 0xe3e38d53, "configfs_register_subsystem" },
	{ 0x86891d7e, "config_group_init" },
	{ 0x650b0258, "config_item_init_type_name" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xedff4be5, "acpi_load_table" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe85f2123, "acpi_tb_unload_table" },
	{ 0x4d2c7133, "acpi_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "configfs");


MODULE_INFO(srcversion, "E2F01C125B89C15B419B5DC");
