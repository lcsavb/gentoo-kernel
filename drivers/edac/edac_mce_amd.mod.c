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
	{ 0x2c2f5a09, "x86_family" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x4c762b5c, "x86_stepping" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x1a281859, "pv_ops" },
	{ 0xc5850110, "printk" },
	{ 0x957c14e3, "smca_get_long_name" },
	{ 0x987ab0a5, "amd_get_nb_id" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13e3aa9a, "smca_banks" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6340434e, "x86_model" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "36ACB4E9C191315AED63274");
