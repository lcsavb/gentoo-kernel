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
	{ 0x3d38ff95, "module_layout" },
	{ 0xd3cb861, "no_llseek" },
	{ 0x674a1507, "misc_deregister" },
	{ 0x3e438274, "misc_register" },
	{ 0xa0f493d9, "efi" },
	{ 0x94961283, "vunmap" },
	{ 0x8f01d8db, "vmap" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0xc6e992c7, "alloc_pages_current" },
	{ 0x2aadad1a, "efi_capsule_update" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xa5bda8a1, "efi_capsule_supported" },
	{ 0xd29ff7ac, "__free_pages" },
	{ 0xc5850110, "printk" },
	{ 0xf9898015, "kmem_cache_alloc_trace" },
	{ 0xc3095f9a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C50B87A8FF23B17036F61DF");
