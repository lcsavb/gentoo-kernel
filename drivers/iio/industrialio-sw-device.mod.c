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
	{ 0xcbff7b2, "configfs_register_default_group" },
	{ 0xfab16584, "iio_configfs_subsys" },
	{ 0x242c867b, "config_item_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x681e3cee, "module_put" },
	{ 0x80942440, "config_item_set_name" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf65c776e, "configfs_unregister_default_group" },
	{ 0xa9e6af54, "try_module_get" },
};

MODULE_INFO(depends, "configfs,industrialio-configfs");


MODULE_INFO(srcversion, "0D1B7789BB9081C5C8F64E0");
