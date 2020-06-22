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
	{ 0xe45fa038, "kobject_put" },
	{ 0xbaa8aa66, "vnic_dev_unregister" },
	{ 0x8fd9d330, "ib_set_device_ops" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd7850f80, "kobject_get" },
	{ 0xf4e1c6b6, "pci_bus_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf30c449, "iommu_attach_device" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6da1c78e, "sockfd_lookup" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xb371e1c6, "ib_device_put" },
	{ 0x66ba77d4, "ib_get_eth_speed" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x35c643ee, "iommu_map" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xfa690589, "netdev_cmd_to_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x1a281859, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb1ee3a2f, "__mmdrop" },
	{ 0x668b19a1, "down_read" },
	{ 0x49a686c3, "kobject_create_and_add" },
	{ 0x3e671dc2, "ib_dealloc_device" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0x712e52f7, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xff98fde2, "kobject_init_and_add" },
	{ 0x4ebd119b, "vnic_dev_get_res" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x726dcbe0, "iommu_set_fault_handler" },
	{ 0xf6c70f64, "vnic_dev_register" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x306cce0d, "ib_query_port" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x97ba1bdb, "ib_device_set_netdev" },
	{ 0x445ab325, "iommu_unmap" },
	{ 0x30c18ecd, "iommu_domain_alloc" },
	{ 0xc298efd3, "vnic_dev_get_pdev" },
	{ 0x6a683da4, "simple_open" },
	{ 0xb777b21b, "iommu_domain_free" },
	{ 0x7419e1ca, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd117cd0d, "iommu_capable" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0xfde47cad, "iommu_detach_device" },
	{ 0x568065d4, "ib_dispatch_event" },
	{ 0x93953e47, "ib_device_get_by_netdev" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4d0aad66, "iommu_present" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc070bddb, "get_user_pages" },
	{ 0xacb35dd1, "ib_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x265fe903, "put_user_pages_dirty_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x27e40251, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x19a59133, "_ib_alloc_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xcc2feec0, "vnic_dev_get_res_count" },
	{ 0x37a0cba, "kfree" },
	{ 0x51946c58, "remap_pfn_range" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x96848186, "scnprintf" },
	{ 0xca9360b5, "rb_next" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x3acb11b, "enic_api_devcmd_proxy_by_index" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "enic,ib_core");

MODULE_ALIAS("pci:v00001137d000000CFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "298F4B5F896A9A05FA8538C");
