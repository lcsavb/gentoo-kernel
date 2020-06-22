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
	{ 0x3120ffbb, "bus_register" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x897556c2, "device_connection_find_match" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x754d539c, "strlen" },
	{ 0x81188c30, "match_string" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0xa3fb3cf6, "device_match_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x5db40570, "fwnode_property_present" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x17475388, "_dev_warn" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x674fc839, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xea8f6ba2, "device_find_child" },
	{ 0x1b13d538, "class_unregister" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13f42b52, "fwnode_property_read_u16_array" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0x45cd73e1, "device_add" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0x681e3cee, "module_put" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x9fd62e9b, "device_match_fwnode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbe921e36, "sysfs_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd94181ab, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0xc24a36af, "dev_fwnode" },
	{ 0x33650c48, "class_destroy" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x3e2e6264, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6B393C5623CA04FB651ED19");
