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
	{ 0xc3c22af5, "fat_detach" },
	{ 0x6749d46f, "drop_nlink" },
	{ 0x18721342, "mark_buffer_dirty_inode" },
	{ 0x66c98bf1, "__mark_inode_dirty" },
	{ 0x349cba85, "strchr" },
	{ 0xe5b3585a, "fat_flush_inodes" },
	{ 0x62f1c076, "fat_truncate_time" },
	{ 0x1568c13c, "inc_nlink" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7d2eeaa3, "mount_bdev" },
	{ 0x1b993de7, "fat_sync_inode" },
	{ 0x23e36a7a, "fat_add_entries" },
	{ 0x10b5e593, "fat_remove_entries" },
	{ 0x4f9a0de8, "fat_alloc_new_dir" },
	{ 0xe58f9299, "fat_fill_super" },
	{ 0xd12ec94b, "fat_build_inode" },
	{ 0xbe384082, "fat_update_time" },
	{ 0x8f648e70, "fat_attach" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe35470b2, "set_nlink" },
	{ 0xd6913353, "sync_dirty_buffer" },
	{ 0x699c1c7, "fat_getattr" },
	{ 0x528bce9c, "__brelse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd6e0d4d5, "kill_block_super" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x7ae343b3, "fat_scan" },
	{ 0x78f88d93, "register_filesystem" },
	{ 0xff02f97b, "__fat_fs_error" },
	{ 0x627bb501, "current_time" },
	{ 0x4129a391, "d_splice_alias" },
	{ 0x19767e97, "fat_setattr" },
	{ 0x37395ecf, "fat_free_clusters" },
	{ 0x281f3e20, "fat_get_dotdot_entry" },
	{ 0xf8eecd11, "unregister_filesystem" },
	{ 0xce0e57f0, "fat_time_unix2fat" },
	{ 0x3023f0d2, "fat_dir_empty" },
	{ 0xe7504ae4, "d_instantiate" },
	{ 0xcdc2b305, "clear_nlink" },
};

MODULE_INFO(depends, "fat");


MODULE_INFO(srcversion, "D01692F7EFF184FED923163");
