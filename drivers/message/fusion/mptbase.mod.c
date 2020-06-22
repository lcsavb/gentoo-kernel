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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x71301392, "param_get_int" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x542a5c87, "proc_create_single_data" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xd23de523, "pci_stop_and_remove_bus_device_locked" },
	{ 0x1af07e1, "pci_get_slot" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xf89fe065, "param_set_int" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x980d5910, "dma_get_required_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6d623b61, "proc_mkdir" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf1e046cc, "panic" },
	{ 0xa6ac98, "seq_putc" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x4261f6f7, "pci_select_bars" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0xdbe9fd07, "pci_enable_device_mem" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdd9c4a32, "pci_release_selected_regions" },
	{ 0x4d73f906, "pci_request_selected_regions" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x20a69ede, "pci_save_state" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "37AABA5C5445C28B07652F3");
