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
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0x58cd258, "simple_pin_fs" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x98a019c1, "inode_permission" },
	{ 0x754d539c, "strlen" },
	{ 0x6944606e, "get_tree_single" },
	{ 0x998e527f, "simple_write_end" },
	{ 0x1ee392e4, "simple_release_fs" },
	{ 0x7ffd7831, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xb8ae7858, "dput" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1568c13c, "inc_nlink" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x275c0262, "d_add" },
	{ 0x70facfe, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1a281859, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x2b1093f5, "d_delete" },
	{ 0x9c8b349f, "sysfs_remove_mount_point" },
	{ 0xc410f486, "kern_path" },
	{ 0xfb578fc5, "memset" },
	{ 0xe1e24225, "kill_litter_super" },
	{ 0x3119ea30, "simple_write_begin" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x1cb2c6d8, "kvasprintf" },
	{ 0xf5418bb, "simple_readpage" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x681e3cee, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0x96a47ada, "simple_unlink" },
	{ 0xbdf30564, "simple_setattr" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0xf1aa37fa, "d_drop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf7603119, "simple_get_link" },
	{ 0x6bebec6d, "path_put" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x78f88d93, "register_filesystem" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x73763cd6, "sysfs_create_mount_point" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xcc112465, "kernel_kobj" },
	{ 0x8a5e72aa, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x68945d2, "iunique" },
	{ 0x69acdf38, "memcpy" },
	{ 0x627bb501, "current_time" },
	{ 0x7997a7e2, "fsnotify" },
	{ 0x1194dcd9, "always_delete_dentry" },
	{ 0xdabd431d, "d_make_root" },
	{ 0x21a921d0, "simple_statfs" },
	{ 0x43a51fc9, "d_alloc_name" },
	{ 0xf8eecd11, "unregister_filesystem" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2b84f737, "new_inode" },
	{ 0x137ff47b, "free_inode_nonrcu" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe7504ae4, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x200ff0a4, "simple_rmdir" },
	{ 0xb37dd6f3, "__d_drop" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AFBCCBBFB031134E5883C5B");
