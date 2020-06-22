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
	{ 0x2d3385d3, "system_wq" },
	{ 0x83c005b8, "cdev_del" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf4e1c6b6, "pci_bus_type" },
	{ 0xc81cd1be, "cdev_init" },
	{ 0x53b954a2, "up_read" },
	{ 0x81188c30, "match_string" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2e76b019, "misc_register" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x36075bb5, "iommu_group_register_notifier" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6a1733eb, "iommu_group_unregister_notifier" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe629aceb, "device_create" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xce807a25, "up_write" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x57bc19d2, "down_write" },
	{ 0x7419e1ca, "fput" },
	{ 0x6e7943ec, "iommu_group_id" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb4446279, "cdev_add" },
	{ 0x681e3cee, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x3c2eabeb, "iommu_group_for_each_dev" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x738e3221, "fd_install" },
	{ 0x1dfdd782, "refcount_dec_and_mutex_lock" },
	{ 0x33650c48, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe66ee2cc, "iommu_group_get" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0x3e2e6264, "__class_create" },
	{ 0x867234, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xcce8d658, "anon_inode_getfile" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1CB8981BF2E5DCC6C1D0D11");
