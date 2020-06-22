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
	{ 0xd020eaa8, "dump_page" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0xe48af658, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x75fc6d15, "async_syndrome_val" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7b629b22, "async_raid6_2data_recov" },
	{ 0xe8906fca, "async_raid6_datap_recov" },
	{ 0x9d1c9cc7, "async_gen_syndrome" },
	{ 0x4068fe03, "async_xor" },
	{ 0x29361773, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "async_pq,async_raid6_recov,async_xor");


MODULE_INFO(srcversion, "18D2B5E3E61CD4E308F394C");
