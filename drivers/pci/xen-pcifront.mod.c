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
	{ 0xebd0860e, "xenbus_unregister_driver" },
	{ 0x665f1e3c, "__xenbus_register_frontend" },
	{ 0xf27b1a9e, "xen_pci_frontend" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1c634b1a, "xenbus_dev_error" },
	{ 0x539f157b, "pci_xen_swiotlb_init_late" },
	{ 0x5e51cd74, "swiotlb_nr_tbl" },
	{ 0x8b360d50, "pci_get_domain_bus_and_slot" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0xfa0b1c44, "xenbus_switch_state" },
	{ 0x7f97458, "xenbus_dev_fatal" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0xe41534ce, "bind_evtchn_to_irqhandler" },
	{ 0xcf5e1536, "xenbus_alloc_evtchn" },
	{ 0xd3e17c6b, "xenbus_grant_ring" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xbd97c29f, "pci_find_bus" },
	{ 0xf916dbbb, "pci_bus_add_devices" },
	{ 0x7c769684, "pci_walk_bus" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0x48cf743f, "pci_scan_root_bus" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x944c43f, "node_states" },
	{ 0x77358855, "iomem_resource" },
	{ 0x27cdca93, "pci_add_resource" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x391c97b1, "pci_scan_single_device" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x1af07e1, "pci_get_slot" },
	{ 0xc5850110, "printk" },
	{ 0x17475388, "_dev_warn" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x642eb5c6, "xen_poll_irq_timeout" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8cda8029, "xen_clear_irq_pending" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x2a74765d, "pci_claim_resource" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0xb602546d, "xenbus_free_evtchn" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x6ada9ab6, "pci_remove_bus" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f40834d, "pci_stop_and_remove_bus_device" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F83A99A673C94EE4E0A8EEE");
