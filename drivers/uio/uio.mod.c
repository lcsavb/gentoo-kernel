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
	{ 0x3ac50f37, "cdev_alloc" },
	{ 0x83c005b8, "cdev_del" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0x8a82f25d, "kobject_set_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x49a686c3, "kobject_create_and_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x27deb818, "generic_access_phys" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7533a30b, "device_del" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1b13d538, "class_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x95536bb7, "fasync_helper" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x45cd73e1, "device_add" },
	{ 0x6c9889fa, "kobject_add" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb4446279, "cdev_add" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x681e3cee, "module_put" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xd94181ab, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x51946c58, "remap_pfn_range" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0xea012f35, "kobject_init" },
	{ 0x566257fc, "kill_fasync" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x8c8f299b, "vmalloc_to_page" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "591992B9182773F113E4868");
