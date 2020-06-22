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
	{ 0x9cce7054, "class_find_device" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x84dbf06e, "sg_miter_start" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xffb7c514, "ida_free" },
	{ 0xf072fe37, "sg_miter_stop" },
	{ 0xfdf56f26, "__devres_alloc_node" },
	{ 0x45cd73e1, "device_add" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0xf565b5ec, "sg_miter_next" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x681e3cee, "module_put" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x84fe7b9e, "devres_add" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xd94181ab, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0x33650c48, "class_destroy" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xe04e2fb4, "sg_alloc_table_from_pages" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xfcf618b1, "device_match_of_node" },
	{ 0x8c8f299b, "vmalloc_to_page" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x3e2e6264, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C811FE8208787B98EC875B5");
