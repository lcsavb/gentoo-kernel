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
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0xa8549d0, "gnttab_map_refs" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xb1c6c5c9, "vm_map_pages_zero" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x6a3cd6eb, "gnttab_alloc_pages" },
	{ 0x4b931968, "xen_features" },
	{ 0x1aba371c, "mmu_notifier_register" },
	{ 0x55dc66ab, "gnttab_unmap_refs_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2c252ed, "mmput" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9312d80e, "evtchn_put" },
	{ 0x2e76b019, "misc_register" },
	{ 0xebef2d24, "gnttab_free_pages" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x677fe9be, "get_task_mm" },
	{ 0xb51ae161, "mmu_notifier_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x66afea61, "apply_to_page_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9688b217, "gnttab_batch_copy" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeca89a3e, "find_vma" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xf5785b42, "evtchn_get" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x3165daa3, "arbitrary_virt_to_machine" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x867234, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe48af658, "__put_page" },
	{ 0xf5661842, "get_user_pages_fast" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D36262674E769370D5884FA");
