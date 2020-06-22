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
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0x8fd9d330, "ib_set_device_ops" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x291d6e90, "ipv6_chk_addr" },
	{ 0x17eb15ba, "vlan_dev_vlan_id" },
	{ 0x7d336e05, "dst_release" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x99f53f53, "neigh_destroy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x93579ece, "qede_rdma_unregister_driver" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x4b4af6c2, "qed_get_rdma_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3e671dc2, "ib_dealloc_device" },
	{ 0xbf6c98a8, "__neigh_event_send" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x27b72934, "ib_umem_get" },
	{ 0x97ba1bdb, "ib_device_set_netdev" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x98001cfc, "init_net" },
	{ 0xab4cb5a3, "rdma_destroy_ah_attr" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0x568065d4, "ib_dispatch_event" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd440649c, "qede_rdma_register_driver" },
	{ 0x75ebc087, "ib_umem_page_count" },
	{ 0xf50e9e8f, "ip6_route_output_flags" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xacb35dd1, "ib_register_device" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x27e40251, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x19a59133, "_ib_alloc_device" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x51946c58, "remap_pfn_range" },
	{ 0x86787ca2, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0xe239c2f6, "__ip_dev_find" },
	{ 0x96848186, "scnprintf" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0x70234e14, "rdma_read_gid_l2_fields" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8a48af13, "pci_enable_atomic_ops_to_root" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x71954ae6, "ib_umem_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9256ea0d, "rdma_copy_ah_attr" },
};

MODULE_INFO(depends, "ib_core,ipv6,qede,qed,ib_uverbs");


MODULE_INFO(srcversion, "FBF216C9B073A3DD2A26097");
