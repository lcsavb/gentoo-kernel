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
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x20978fb9, "idr_find" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x52c2f88e, "atm_charge" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x652032cb, "mac_pton" },
	{ 0x726763d8, "atm_dev_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfb578fc5, "memset" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x1000e51, "schedule" },
	{ 0xc3f01f39, "skb_unlink" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1a281859, "pv_ops" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xccb6570, "atm_dev_deregister" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xc5850110, "printk" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");

MODULE_ALIAS("pci:v0000111Dd00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AABAA784C28A599284EAC7C");
