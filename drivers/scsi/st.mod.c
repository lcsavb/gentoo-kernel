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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x1b13d538, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3ba5bb9c, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0x2a421847, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x8ab9a702, "blk_put_queue" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xec431e30, "blk_get_queue" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x679a153d, "scsi_autopm_get_device" },
	{ 0x118cd239, "scsi_autopm_put_device" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0xe48af658, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xfb578fc5, "memset" },
	{ 0xf5661842, "get_user_pages_fast" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf4de1fd5, "blk_queue_rq_timeout" },
	{ 0x26584827, "scsi_ioctl" },
	{ 0xfc828412, "scsi_cmd_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xed6e3872, "scsi_ioctl_block_when_processing_errors" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x7920c748, "scsi_block_when_processing_errors" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x712e52f7, "current_task" },
	{ 0x665e95e2, "blk_rq_map_user" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf6c921db, "blk_execute_rq_nowait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x9e34b64e, "blk_get_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xa6ca64c9, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x41d7f5a3, "blk_put_request" },
	{ 0x5f6e040, "blk_rq_unmap_user" },
	{ 0x29361773, "complete" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x545fa907, "scsi_set_medium_removal" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe629aceb, "device_create" },
	{ 0xb4446279, "cdev_add" },
	{ 0x3ac50f37, "cdev_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x83c005b8, "cdev_del" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x96848186, "scnprintf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC7BF3F0D5C28137E193E3A");
