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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0x99302c94, "kernel_sendmsg" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xb394f402, "nvmet_req_uninit" },
	{ 0xc847fc78, "nvmet_ctrl_fatal_error" },
	{ 0x771df2cc, "sock_release" },
	{ 0x87e9fd24, "sock_recvmsg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfee7e042, "nvmet_sq_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x82797d87, "kernel_listen" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x75d0e3de, "crypto_ahash_digest" },
	{ 0xc5c90059, "nvmet_req_execute" },
	{ 0xf456afd7, "kernel_setsockopt" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x12b1a778, "inet_pton_with_scope" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3441c7b7, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb05f8b13, "nvmet_register_transport" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc51c9be0, "kernel_sock_shutdown" },
	{ 0x7801aa84, "kernel_getsockname" },
	{ 0x8742d5f3, "kernel_getpeername" },
	{ 0x98001cfc, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xbda2c563, "nvmet_req_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x472dbb54, "nvmet_unregister_transport" },
	{ 0x2aa47f53, "kernel_sendpage" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x69949a0a, "nvmet_sq_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcf961dd0, "kernel_recvmsg" },
	{ 0x8467d879, "kernel_accept" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xad32c59, "sock_create" },
	{ 0xb88c6bb6, "kernel_bind" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0xbcd5aa22, "nvmet_req_complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa084f79f, "cpumask_next_wrap" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xd24a6d19, "crypto_alloc_ahash" },
};

MODULE_INFO(depends, "nvmet");


MODULE_INFO(srcversion, "B43B30EB12D2A4FD1CF73E5");
