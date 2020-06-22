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
	{ 0x9cce7054, "class_find_device" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x897556c2, "device_connection_find_match" },
	{ 0xa3fb3cf6, "device_match_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5db40570, "fwnode_property_present" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x674fc839, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x681e3cee, "module_put" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9fd62e9b, "device_match_fwnode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xde0fe06f, "fwnode_get_parent" },
	{ 0xa3ba5ea, "fwnode_connection_find_match" },
	{ 0x37a0cba, "kfree" },
	{ 0xc24a36af, "dev_fwnode" },
	{ 0x33650c48, "class_destroy" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x3e2e6264, "__class_create" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C128281CC28DE244225894F");
