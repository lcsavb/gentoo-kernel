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
	{ 0xb5f19d35, "pnfs_unregister_layoutdriver" },
	{ 0xcbc73774, "nfs4_schedule_session_recovery" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x8c7be88d, "nfs_request_add_commit_list" },
	{ 0x1808ab79, "pnfs_nfs_generic_sync" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x102ad760, "nfs4_pnfs_ds_connect" },
	{ 0x3c63555c, "pnfs_generic_clear_request_commit" },
	{ 0x68a50053, "nfs4_setup_sequence" },
	{ 0xf0fa4c89, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc2b7d9ee, "nfs_initiate_commit" },
	{ 0xcd164005, "pnfs_error_mark_layout_for_return" },
	{ 0xe93818b3, "nfs4_pnfs_ds_put" },
	{ 0x2ed8c741, "nfs4_mark_deviceid_unavailable" },
	{ 0xdf05942f, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0xa1157550, "nfs4_decode_mp_ds_addr" },
	{ 0x1289a4de, "nfs_initiate_pgio" },
	{ 0x17983151, "nfs4_set_rw_stateid" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9bddd759, "pnfs_generic_commit_pagelist" },
	{ 0x1a281859, "pv_ops" },
	{ 0x5fc9f6ba, "pnfs_generic_recover_commit_reqs" },
	{ 0xda8356ef, "pnfs_generic_pg_test" },
	{ 0x9f8e0699, "pnfs_update_layout" },
	{ 0x95f2410e, "rpc_exit" },
	{ 0xc1300002, "pnfs_generic_pg_cleanup" },
	{ 0x3a26bf9e, "pnfs_generic_write_commit_done" },
	{ 0x2052af47, "rpc_delay" },
	{ 0xaf511ad9, "xdr_init_decode_pages" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xbf0dcc3c, "nfs4_find_get_deviceid" },
	{ 0x1b0011eb, "nfs4_find_or_create_ds_client" },
	{ 0xf985ac77, "nfs_pageio_reset_write_mds" },
	{ 0x5c23e1c6, "pnfs_layout_mark_request_commit" },
	{ 0xdad13a0e, "pnfs_destroy_layout" },
	{ 0x5df69fb3, "nfs4_pnfs_ds_add" },
	{ 0x33973f08, "pnfs_put_lseg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb5b542f5, "nfs4_put_deviceid_node" },
	{ 0xed15fb41, "nfs4_print_deviceid" },
	{ 0x305d26d3, "pnfs_set_layoutcommit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x17417bb8, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0xf42f663d, "nfs41_sequence_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb5278473, "nfs4_test_deviceid_unavailable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0xd6ef5ef8, "pnfs_generic_pg_readpages" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x247202ee, "pnfs_read_done_resend_to_mds" },
	{ 0xd116411, "rpc_count_iostats" },
	{ 0x9a5e9c9, "rpc_restart_call_prepare" },
	{ 0xddfeeb23, "pnfs_generic_pg_writepages" },
	{ 0xc6829866, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9f733fa, "pnfs_generic_pg_check_layout" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1cdde079, "__tracepoint_nfs4_pnfs_read" },
	{ 0x262c01d1, "pnfs_write_done_resend_to_mds" },
	{ 0x71bc40e3, "rpc_wake_up" },
	{ 0x4c327abb, "xdr_inline_decode" },
	{ 0x163831c3, "__tracepoint_nfs4_pnfs_write" },
	{ 0x23d74483, "nfs_pageio_reset_read_mds" },
	{ 0x1d327df3, "nfs4_init_deviceid_node" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xee4dfe03, "pnfs_set_lo_fail" },
	{ 0x40e9709a, "xdr_set_scratch_buffer" },
	{ 0x5cfb6199, "nfs_writeback_update_inode" },
	{ 0x331489cf, "pnfs_register_layoutdriver" },
};

MODULE_INFO(depends, "nfsv4,nfs,sunrpc");


MODULE_INFO(srcversion, "04D4A0C0C898E08E1C9412B");
