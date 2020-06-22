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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x6749d46f, "drop_nlink" },
	{ 0x53b954a2, "up_read" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0x78723a3a, "user_path_at_empty" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdec7c635, "__remove_inode_hash" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9891135e, "filemap_write_and_wait_range" },
	{ 0x3cea4168, "iget5_locked" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x81767d1b, "kill_anon_super" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x7d917170, "is_bad_inode" },
	{ 0x7eb8cc0f, "touch_atime" },
	{ 0xb8ae7858, "dput" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0x32e0924e, "__register_chrdev" },
	{ 0x1568c13c, "inc_nlink" },
	{ 0xa2839281, "d_find_alias" },
	{ 0x556f48e2, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc243c261, "vfs_fsync" },
	{ 0x70facfe, "generic_read_dir" },
	{ 0x5d558361, "super_setup_bdi" },
	{ 0x9a96a162, "mount_nodev" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xd310388d, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xbb62272b, "__insert_inode_hash" },
	{ 0xfe42d23b, "kernel_read" },
	{ 0x4e294a39, "vfs_iter_write" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x32d5f3e8, "from_kuid" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x61bbcd92, "from_kgid" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe35470b2, "set_nlink" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0xe629aceb, "device_create" },
	{ 0x6a287754, "unlock_page" },
	{ 0xce807a25, "up_write" },
	{ 0x3bbc3167, "shrink_dcache_sb" },
	{ 0x57bc19d2, "down_write" },
	{ 0x7419e1ca, "fput" },
	{ 0xea4ef64c, "inode_nohighmem" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe3868bff, "__task_pid_nr_ns" },
	{ 0x610ad28d, "ilookup5" },
	{ 0xc51140f3, "inode_init_once" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb490365f, "truncate_inode_pages_final" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x66edc9c2, "vfs_iter_read" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x8a55f270, "unlock_new_inode" },
	{ 0xf1aa37fa, "d_drop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf6dea470, "d_prune_aliases" },
	{ 0xb484f2a1, "shrink_dcache_parent" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6bebec6d, "path_put" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x78f88d93, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf1da0059, "init_pid_ns" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8a5e72aa, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4da92f5, "page_get_link" },
	{ 0xee22e17b, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfaafd4ce, "__sb_end_write" },
	{ 0x627bb501, "current_time" },
	{ 0x4129a391, "d_splice_alias" },
	{ 0x8d72717b, "sync_filesystem" },
	{ 0x8edd97ea, "fget" },
	{ 0x9de36ac0, "__sb_start_write" },
	{ 0x33650c48, "class_destroy" },
	{ 0xdabd431d, "d_make_root" },
	{ 0x2d8a5ed3, "task_active_pid_ns" },
	{ 0xf8eecd11, "unregister_filesystem" },
	{ 0xfff7156e, "init_special_inode" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x2b84f737, "new_inode" },
	{ 0x57b30bde, "generic_file_splice_read" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3e2e6264, "__class_create" },
	{ 0x8cd5b57f, "clear_inode" },
	{ 0xe7504ae4, "d_instantiate" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xcdc2b305, "clear_nlink" },
	{ 0x342b21fb, "generic_fillattr" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "89FDE8A3C13E815D481AB32");
