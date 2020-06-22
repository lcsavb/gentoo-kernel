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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x712e52f7, "current_task" },
	{ 0x754d539c, "strlen" },
	{ 0x52c2f88e, "atm_charge" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc3f01f39, "skb_unlink" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xd95d1ad5, "atm_dev_signal_change" },
	{ 0x77989b7e, "device_create_file" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x726763d8, "atm_dev_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x17475388, "_dev_warn" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xccb6570, "atm_dev_deregister" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xc5850110, "printk" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");

MODULE_ALIAS("pci:v000010EEd00000300sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9E1B5A29D38669973761FF1");
