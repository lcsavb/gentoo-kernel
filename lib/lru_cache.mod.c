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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xfb578fc5, "memset" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa6ac98, "seq_putc" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xad12e7a6, "kmem_cache_size" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3ACCA4FB23A87AD88E0D314");
