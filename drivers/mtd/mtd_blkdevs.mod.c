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
	{ 0x3d92d67d, "__blk_mq_end_request" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0xe62c1ea0, "mtd_table_mutex" },
	{ 0x977fb466, "blk_mq_start_request" },
	{ 0xa3f9eb19, "blk_mq_unfreeze_queue" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbba12b0c, "__put_mtd_device" },
	{ 0x47f7121f, "blk_mq_freeze_queue" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3f3a3826, "__get_mtd_device" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x1a281859, "pv_ops" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xefe37f23, "blk_queue_max_discard_sectors" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0xf0371db3, "blk_mq_free_tag_set" },
	{ 0xb18b2b6a, "register_mtd_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdae556b3, "__mtd_next_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x72dd3f25, "unregister_mtd_user" },
	{ 0x43a0ed9c, "blk_update_request" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd47912f9, "blk_queue_flag_clear" },
	{ 0x681e3cee, "module_put" },
	{ 0x48ffed47, "blk_mq_init_sq_queue" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x36a099f6, "__module_get" },
	{ 0xcb8571b8, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x2804b64e, "blk_mq_quiesce_queue" },
	{ 0xc1831d82, "blk_mq_unquiesce_queue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0xf8fd1b8d, "blk_queue_logical_block_size" },
	{ 0xff76cbba, "set_disk_ro" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "3561D640AA8701323854A99");
