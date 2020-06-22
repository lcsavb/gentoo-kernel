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
	{ 0x38e46431, "mempool_exit" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb39fc746, "bio_devname" },
	{ 0x3d900405, "md_check_recovery" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x735dd09f, "unregister_md_personality" },
	{ 0x1a281859, "pv_ops" },
	{ 0xc58d19cb, "md_register_thread" },
	{ 0xb2e33570, "bio_init" },
	{ 0xeec54807, "md_flush_request" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd5bbdf39, "disk_stack_limits" },
	{ 0xa6ac98, "seq_putc" },
	{ 0x5e3c84b4, "generic_make_request" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x1ca2179, "md_integrity_add_rdev" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdfac1770, "bio_endio" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x9b77eeb7, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xed633a11, "md_set_array_sectors" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xdcd98c5c, "md_wakeup_thread" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x6b1edcf, "__bio_clone_fast" },
	{ 0x2b0a0253, "md_error" },
	{ 0x53e80c93, "md_check_no_bitmap" },
	{ 0x9974f22f, "md_integrity_register" },
	{ 0x84723080, "register_md_personality" },
	{ 0x181e27b, "bio_associate_blkg" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "24082A9E4533F660D1EDE85");
