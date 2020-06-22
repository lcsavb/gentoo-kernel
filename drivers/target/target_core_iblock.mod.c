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
	{ 0x122e8fc, "sbc_attrib_attrs" },
	{ 0x208e0367, "sbc_get_device_type" },
	{ 0xfb956de, "target_backend_unregister" },
	{ 0x5e13ca39, "transport_backend_register" },
	{ 0x84dbf06e, "sg_miter_start" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf072fe37, "sg_miter_stop" },
	{ 0x8675066f, "bio_integrity_add_page" },
	{ 0xf565b5ec, "sg_miter_next" },
	{ 0x37ca3226, "bio_integrity_alloc" },
	{ 0xa0f61319, "bioset_integrity_create" },
	{ 0x4fad9c73, "target_configure_unmap_from_queue" },
	{ 0x182a0dc7, "blkdev_get_by_path" },
	{ 0x3bce16e5, "bioset_init" },
	{ 0x804ec939, "bioset_exit" },
	{ 0x35b84b72, "blkdev_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9b77eeb7, "bdevname" },
	{ 0xfb7f05a3, "blkdev_issue_zeroout" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x10ee93af, "bio_add_page" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x2a7359bd, "sbc_get_write_same_sectors" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x2ae4c235, "submit_bio" },
	{ 0x4f7b298f, "fs_bio_set" },
	{ 0x181e27b, "bio_associate_blkg" },
	{ 0x64f40fde, "bio_alloc_bioset" },
	{ 0x699e034f, "bio_put" },
	{ 0xf8094f51, "target_complete_cmd" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xb5537d7, "blkdev_issue_discard" },
	{ 0x10c9a415, "target_to_linux_sector" },
	{ 0x45d5cfb9, "sbc_parse_cdb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "B0199036C2F1CA545D01E16");
