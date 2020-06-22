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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xbbddd0f1, "ttm_pool_populate" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x4c6058eb, "ttm_bo_eviction_valuable" },
	{ 0x8db2122b, "ttm_tt_fini" },
	{ 0x535dc8f2, "ttm_bo_put" },
	{ 0x2a6b6acb, "ttm_bo_move_to_lru_tail" },
	{ 0x6fba58ee, "ttm_bo_validate" },
	{ 0x4fee1665, "ttm_bo_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1a281859, "pv_ops" },
	{ 0xd2793dbc, "ttm_bo_add_to_lru" },
	{ 0x410fe558, "drm_gem_handle_create" },
	{ 0x6c80d14b, "drm_gem_object_put_unlocked" },
	{ 0xfd66d420, "ttm_bo_kmap" },
	{ 0x991c901e, "ttm_tt_init" },
	{ 0x9d8d8d2f, "drm_gem_object_release" },
	{ 0x5cac71b3, "ttm_bo_dma_acc_size" },
	{ 0x9a17f512, "ttm_bo_init_mm" },
	{ 0x81b667a5, "ttm_bo_device_init" },
	{ 0x810dddc7, "ttm_bo_del_sub_from_lru" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf8c5f336, "ttm_bo_kunmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97cab1e3, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa0929e4, "drm_gem_object_init" },
	{ 0x810378f9, "ttm_bo_device_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x268c52b0, "ww_mutex_unlock" },
	{ 0xa1ab6a82, "ttm_bo_manager_func" },
	{ 0xcadef538, "drm_vma_node_is_allowed" },
	{ 0xb120959d, "ttm_pool_unpopulate" },
	{ 0x5c744bb0, "ww_mutex_lock_interruptible" },
	{ 0xca0fd70e, "ttm_bo_mmap" },
};

MODULE_INFO(depends, "ttm,drm");


MODULE_INFO(srcversion, "86A60583560940A8EB4ED7C");
