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
	{ 0x984c5e73, "p9_fcall_fini" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x1eb99bcc, "p9_client_cb" },
	{ 0xdeaffb78, "v9fs_unregister_trans" },
	{ 0x6fc1b092, "ib_dealloc_pd_user" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xd517f601, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x44e9a829, "match_token" },
	{ 0x95d18f0d, "v9fs_register_trans" },
	{ 0x62db3bf, "__rdma_create_id" },
	{ 0xf2411869, "rdma_destroy_id" },
	{ 0x85df9b6c, "strsep" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb79f25fd, "p9_parse_header" },
	{ 0x9e14ef4a, "rdma_connect" },
	{ 0xd452d2ac, "p9_tag_lookup" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa4c058d7, "ib_destroy_qp_user" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x4e3567f7, "match_int" },
	{ 0xc14da3df, "__ib_alloc_cq_any" },
	{ 0x98001cfc, "init_net" },
	{ 0xd96feaac, "rdma_create_qp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x24d786ed, "rdma_bind_addr" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xf9bda5c5, "rdma_resolve_route" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbbde792b, "rdma_disconnect" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2a6966, "up" },
	{ 0x27cfee, "rdma_resolve_addr" },
	{ 0xfae2dde0, "__ib_alloc_pd" },
	{ 0x29361773, "complete" },
	{ 0x6c36e95b, "p9_req_put" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xb8f5516e, "ib_free_cq_user" },
};

MODULE_INFO(depends, "9pnet,ib_core,rdma_cm");


MODULE_INFO(srcversion, "9065E052E74D5033B192DB3");
