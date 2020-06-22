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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf4e1c6b6, "pci_bus_type" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7d269b6f, "unregister_xenbus_watch" },
	{ 0xb824c9c3, "xenbus_map_ring_valloc" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x1e1be212, "device_release_driver" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x870e16b7, "xen_test_irq_shared" },
	{ 0x7270d20d, "xenbus_dev_is_online" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xda06fac, "pci_disable_msix" },
	{ 0xae6a747, "pci_load_and_free_saved_state" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd6f026d2, "pci_dev_get" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa028e565, "xenbus_unmap_ring_vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xa449e801, "xenbus_watch_path" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7fb6dd5b, "pci_store_saved_state" },
	{ 0xc145164f, "__xenbus_register_backend" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xebd0860e, "xenbus_unregister_driver" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5110fa61, "xen_register_device_domain_owner" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x113115a6, "xen_find_device_domain_owner" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9c6e081e, "pci_load_saved_state" },
	{ 0xce807a25, "up_write" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xaef7f7cc, "__pci_reset_function_locked" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0xa452f2a4, "xen_pirq_from_irq" },
	{ 0xb01b9d62, "pci_find_capability" },
	{ 0x6dd96a89, "pci_set_mwi" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x1ec199ee, "bus_register_notifier" },
	{ 0xffc34515, "xen_unregister_device_domain_owner" },
	{ 0x19c8fe81, "driver_create_file" },
	{ 0xca155594, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b04668e, "bind_interdomain_evtchn_to_irqhandler" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfa0b1c44, "xenbus_switch_state" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x8aefcfd8, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x7f97458, "xenbus_dev_fatal" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x519ddc40, "driver_remove_file" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xbd36beb, "bus_unregister_notifier" },
	{ 0x1cb9a1c8, "xenbus_gather" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x7712771a, "unbind_from_irqhandler" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "30302D3A5595F47B5A474A9");
