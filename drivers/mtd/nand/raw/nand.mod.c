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
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7d057e75, "nand_calculate_ecc" },
	{ 0x36faa543, "nanddev_mtd_max_bad_blocks" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8646be4c, "mtd_ooblayout_get_eccbytes" },
	{ 0x9b6d0905, "mtd_ooblayout_get_databytes" },
	{ 0x36b06848, "mtd_ooblayout_find_eccregion" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0xf407c66d, "nand_correct_data" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x57a79f11, "mtd_ooblayout_set_databytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb578fc5, "memset" },
	{ 0x6fcb87a1, "touch_softlockup_watchdog" },
	{ 0xa188e493, "mtd_ooblayout_count_freebytes" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x114f069c, "mtd_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9c91a34e, "mtd_write_oob" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf441ac43, "ioread8_rep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xf815c8, "mtd_ooblayout_set_eccbytes" },
	{ 0xc501e27f, "nanddev_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x4a90c8f2, "nanddev_cleanup" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb254da97, "mtd_device_unregister" },
	{ 0x996a8463, "mtd_read_oob" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "nand_ecc,nandcore,mtd");


MODULE_INFO(srcversion, "32FD53CD26774C194483173");
