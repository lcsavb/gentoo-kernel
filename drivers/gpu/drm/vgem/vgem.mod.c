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
	{ 0xe0a05950, "drm_release" },
	{ 0x26981824, "drm_prime_gem_destroy" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x379e8122, "drm_dev_register" },
	{ 0xc8595de7, "drm_compat_ioctl" },
	{ 0x5af6a84e, "drm_gem_put_pages" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x7ac89f15, "dma_resv_test_signaled_rcu" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xf6f48847, "drm_gem_prime_import_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x93103119, "drm_dev_fini" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x167b5374, "drm_dev_put" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x6f9429e6, "drm_dev_unregister" },
	{ 0xd7ba4cac, "drm_prime_pages_to_sg" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7659561d, "dma_resv_add_shared_fence" },
	{ 0x410fe558, "drm_gem_handle_create" },
	{ 0xd8c2e807, "vmap" },
	{ 0x6c80d14b, "drm_gem_object_put_unlocked" },
	{ 0x5e9c15a7, "shmem_read_mapping_page_gfp" },
	{ 0xfe6d4a3c, "ww_mutex_lock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9d8d8d2f, "drm_gem_object_release" },
	{ 0xdd8166a1, "dma_fence_free" },
	{ 0xf75ae0eb, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x7419e1ca, "fput" },
	{ 0x884516b, "drm_gem_vm_open" },
	{ 0x22e04ebb, "drm_gem_vm_close" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x8cd72a34, "drm_gem_prime_fd_to_handle" },
	{ 0xebb49169, "drm_ioctl" },
	{ 0x27d75896, "drm_gem_mmap" },
	{ 0x599e1d13, "drm_clflush_pages" },
	{ 0x4a6bc7d4, "dma_resv_reserve_shared" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8518a3, "drm_dev_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97cab1e3, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x28e5d756, "drm_gem_prime_handle_to_fd" },
	{ 0xa0929e4, "drm_gem_object_init" },
	{ 0xa29016e3, "drm_gem_create_mmap_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x268c52b0, "ww_mutex_unlock" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0x822a422b, "drm_prime_sg_to_page_addr_arrays" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c28ed99, "drm_gem_get_pages" },
	{ 0x969c4246, "dma_resv_add_excl_fence" },
	{ 0x63d22571, "drm_poll" },
	{ 0x2e4dc99c, "drm_open" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "818BE8909795B7C75E12648");
