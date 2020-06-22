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
	{ 0xebd0860e, "xenbus_unregister_driver" },
	{ 0x665f1e3c, "__xenbus_register_frontend" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1a281859, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x4b931968, "xen_features" },
	{ 0x31dca4d8, "gnttab_claim_grant_reference" },
	{ 0xf27d0a7b, "gnttab_grant_foreign_access_ref" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd27f215d, "gnttab_alloc_grant_references" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x80c11314, "gnttab_query_foreign_access" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x17475388, "_dev_warn" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0xb827674a, "xenbus_frontend_closed" },
	{ 0xfa0b1c44, "xenbus_switch_state" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xeb552a8c, "scsi_add_device" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x80bbc9c3, "scsi_remove_device" },
	{ 0x1c406b28, "scsi_device_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xce0a4020, "xenbus_directory" },
	{ 0x1c634b1a, "xenbus_dev_error" },
	{ 0x712e52f7, "current_task" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7f97458, "xenbus_dev_fatal" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc26351f8, "bind_evtchn_to_irq" },
	{ 0xcf5e1536, "xenbus_alloc_evtchn" },
	{ 0xd3e17c6b, "xenbus_grant_ring" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0223D12E905EE19E66E0D57");
