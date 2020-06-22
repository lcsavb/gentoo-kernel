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
	{ 0x40a7c86c, "cxgbi_ppm_ppods_reserve" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1551a9a5, "__kfree_skb" },
	{ 0xf32e8d81, "iscsi_host_remove" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9d0b4986, "iscsi_tcp_set_max_r2t" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x2e5abb57, "cxgbi_ppm_ppod_release" },
	{ 0xe8cb1a9c, "iscsi_tcp_recv_skb" },
	{ 0x7d336e05, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6f026d2, "pci_dev_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0xadc7b5e2, "iscsi_unregister_transport" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0xbe3496f3, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x99f53f53, "neigh_destroy" },
	{ 0xe0e57a59, "iscsi_host_add" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x12c401b5, "iscsi_host_alloc" },
	{ 0x1a281859, "pv_ops" },
	{ 0xab9c173c, "iscsi_lookup_endpoint" },
	{ 0x2ad021d2, "iscsi_tcp_r2tpool_free" },
	{ 0x89b3f038, "iscsi_itt_to_ctask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x712e52f7, "current_task" },
	{ 0x74f92a61, "cxgbi_ppm_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe31efa66, "iscsi_tcp_r2tpool_alloc" },
	{ 0xc26798, "iscsi_host_set_param" },
	{ 0xffe85b6a, "iscsi_host_free" },
	{ 0xc188e41a, "iscsi_suspend_tx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb5226890, "iscsi_destroy_endpoint" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x98001cfc, "init_net" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0xd37ca5bc, "iscsi_tcp_conn_setup" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4af38440, "vlan_dev_real_dev" },
	{ 0x15896e9f, "ipv6_dev_get_saddr" },
	{ 0xdf1dd849, "iscsi_set_param" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x681e3cee, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xf50e9e8f, "ip6_route_output_flags" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x3914eecf, "iscsi_register_transport" },
	{ 0xc60941ad, "iscsi_tcp_cleanup_task" },
	{ 0xea5d8ef2, "iscsi_conn_queue_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7dbbf771, "iscsi_tcp_hdr_recv_prep" },
	{ 0x667721a2, "cxgbi_ppm_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7b69d1a3, "iscsi_conn_failure" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x2b84e672, "iscsi_create_endpoint" },
	{ 0x37a0cba, "kfree" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe239c2f6, "__ip_dev_find" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x58d6e949, "iscsi_session_setup" },
	{ 0x207c79eb, "iscsi_host_get_param" },
	{ 0x7f74d826, "iscsi_conn_bind" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x4717534, "iscsi_tcp_recv_segment_is_hdr" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xff493330, "cxgbi_ppm_make_ppod_hdr" },
};

MODULE_INFO(depends, "libcxgb,libiscsi,libiscsi_tcp,scsi_transport_iscsi,ipv6");


MODULE_INFO(srcversion, "EA05CAB2A1F124A2DED2FB0");
