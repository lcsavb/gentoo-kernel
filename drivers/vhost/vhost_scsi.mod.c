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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x949728c0, "target_submit_cmd_map_sgls" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xefd0154f, "iov_iter_npages" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x12d1438e, "vhost_work_flush" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x20f6d704, "target_put_sess_cmd" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x754d539c, "strlen" },
	{ 0x52477eff, "core_tpg_register" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xe55cfca, "transport_generic_free_cmd" },
	{ 0xfdcaa66f, "target_register_template" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb0955d98, "core_tpg_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa90fbd85, "vhost_dev_cleanup" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x84c7891c, "vhost_log_access_ok" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x6689dc84, "vhost_enable_notify" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc1a1c0a4, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xecc0da4a, "vhost_disable_notify" },
	{ 0x2e76b019, "misc_register" },
	{ 0xc2a9dd32, "vhost_signal" },
	{ 0xb96898ae, "vhost_dev_ioctl" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x30720bb, "iov_iter_get_pages" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x85b6424b, "vhost_get_vq_desc" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0x5b840287, "target_remove_session" },
	{ 0x337a617b, "vhost_work_queue" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe83713, "target_undepend_item" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x2640096f, "vhost_add_used_and_signal" },
	{ 0x5fa974c2, "target_setup_session" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0xf67dd98e, "transport_send_check_condition_and_sense" },
	{ 0x3e2df18c, "target_unregister_template" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4387e89c, "vhost_exceeds_weight" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0xbb62d8f3, "vhost_vq_init_access" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xf31ec237, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5862c313, "vhost_dev_init" },
	{ 0xb2b2c4c4, "iov_iter_advance" },
	{ 0xfbbe6ca7, "vhost_dev_stop" },
	{ 0x844de37a, "vhost_vq_access_ok" },
	{ 0xbfa225ea, "target_execute_cmd" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x66eeb362, "vhost_vring_ioctl" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2c3094a1, "target_depend_item" },
	{ 0x867234, "misc_deregister" },
	{ 0x6fb8948f, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe48af658, "__put_page" },
	{ 0x6ee59d62, "vhost_add_used" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "target_core_mod,vhost");


MODULE_INFO(srcversion, "2E5A0D4A4D5D4918086B8D9");
