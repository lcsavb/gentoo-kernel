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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6749d46f, "drop_nlink" },
	{ 0x28d42fa3, "put_pid" },
	{ 0x349cba85, "strchr" },
	{ 0x277826a8, "get_task_pid" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7468c06, "path_is_mountpoint" },
	{ 0xff6a759c, "from_kuid_munged" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x6a43bf8b, "pid_vnr" },
	{ 0xd517f601, "seq_puts" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xb8ae7858, "dput" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x1568c13c, "inc_nlink" },
	{ 0x764683f0, "dentry_open" },
	{ 0x556f48e2, "init_user_ns" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7ec78bdd, "rename_lock" },
	{ 0x275c0262, "d_add" },
	{ 0x70facfe, "generic_read_dir" },
	{ 0x9a96a162, "mount_nodev" },
	{ 0x9582b977, "path_get" },
	{ 0xbc9ecc4f, "may_umount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbc46e78a, "from_kgid_munged" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd310388d, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x9ab0d9e4, "dcache_dir_lseek" },
	{ 0x2e76b019, "misc_register" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xe1e24225, "kill_litter_super" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xe35470b2, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa41dfc23, "__close_fd" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4e3567f7, "match_int" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7419e1ca, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe3868bff, "__task_pid_nr_ns" },
	{ 0xbce25a69, "path_has_submounts" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xf1aa37fa, "d_drop" },
	{ 0xfd176ecf, "may_umount_tree" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6bebec6d, "path_put" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd5cf181e, "simple_empty" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5161bc41, "dcache_readdir" },
	{ 0x78f88d93, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1b6617c, "d_lookup" },
	{ 0xf1da0059, "init_pid_ns" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf7859825, "find_get_pid" },
	{ 0xff386d03, "dcache_dir_open" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x68aeddeb, "dcache_dir_close" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xd7b690e4, "follow_up" },
	{ 0x69acdf38, "memcpy" },
	{ 0x627bb501, "current_time" },
	{ 0x738e3221, "fd_install" },
	{ 0x8edd97ea, "fget" },
	{ 0xdabd431d, "d_make_root" },
	{ 0x23083114, "__kernel_write" },
	{ 0x21a921d0, "simple_statfs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf8eecd11, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x2b84f737, "new_inode" },
	{ 0x792447ee, "follow_down_one" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8cd5b57f, "clear_inode" },
	{ 0x867234, "misc_deregister" },
	{ 0xcdc2b305, "clear_nlink" },
	{ 0xe914e41e, "strcpy" },
	{ 0x25173182, "kern_path_mountpoint" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F837A8D53B4A444019D1150");
