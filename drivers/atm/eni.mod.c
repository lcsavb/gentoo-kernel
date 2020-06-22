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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1a1b401e, "atm_alloc_charge" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6386f11e, "suni_init" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x726763d8, "atm_dev_register" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x712e52f7, "current_task" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xc5850110, "printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xccb6570, "atm_dev_deregister" },
	{ 0xedc03953, "iounmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm,suni");

MODULE_ALIAS("pci:v0000111Ad00000000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000111Ad00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8A0E85548E39976FCD49CF5");
