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
	{ 0xe45fa038, "kobject_put" },
	{ 0xbad041a1, "kset_create_and_add" },
	{ 0x3120ffbb, "bus_register" },
	{ 0xf78a03d2, "iommu_group_remove_device" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x53b954a2, "up_read" },
	{ 0xbcafe9f9, "iommu_group_add_device" },
	{ 0xcf2ab383, "sysfs_create_files" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x22007034, "kobject_del" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x49a686c3, "kobject_create_and_add" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x17475388, "_dev_warn" },
	{ 0x7533a30b, "device_del" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x146c939d, "class_compat_create_link" },
	{ 0xff98fde2, "kobject_init_and_add" },
	{ 0x1a7a9869, "class_compat_remove_link" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0x45cd73e1, "device_add" },
	{ 0xce807a25, "up_write" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x6e7943ec, "iommu_group_id" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe69414b5, "kobject_uevent_env" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x1b069d36, "sysfs_remove_file_ns" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x89485687, "iommu_group_put" },
	{ 0xd94181ab, "get_device" },
	{ 0x32c3cb4e, "class_compat_register" },
	{ 0xd829170, "sysfs_remove_files" },
	{ 0xd3b9e080, "device_for_each_child" },
	{ 0xc22114fa, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x13cb47a3, "sysfs_create_groups" },
	{ 0x8d22bb58, "iommu_group_alloc" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0x4ec0bd0, "sysfs_remove_groups" },
	{ 0xe5883bd9, "class_compat_unregister" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x274a25f4, "sysfs_create_file_ns" },
	{ 0x65a9a882, "device_remove_file_self" },
	{ 0x7b4da6ff, "__init_rwsem" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "96B998689908819DE95A343");
