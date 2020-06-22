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
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0xb1c6c5c9, "vm_map_pages_zero" },
	{ 0x4b931968, "xen_features" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xba24b3b7, "xen_remap_pfn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0x2e76b019, "misc_register" },
	{ 0x45009fd2, "xen_unmap_domain_gfn_range" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x66afea61, "apply_to_page_range" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xbaa88aaf, "alloc_xenballooned_pages" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x816f5bd1, "xen_remap_vma_range" },
	{ 0xc9d65cd6, "free_xenballooned_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeca89a3e, "find_vma" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xb285b8f8, "xen_in_preemptible_hcall" },
	{ 0x867234, "misc_deregister" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe48af658, "__put_page" },
	{ 0xf5661842, "get_user_pages_fast" },
	{ 0x13f2215a, "xen_xlate_remap_gfn_array" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D11A99D3D45E2D9A241D029");
