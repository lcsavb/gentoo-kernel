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
	{ 0x6c68753b, "fc_linkup" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3120ffbb, "bus_register" },
	{ 0x712158d2, "fc_exch_init" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x6c63dbf3, "fc_rport_create" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xb0ddd5a1, "fc_rport_flush_queue" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xd3a6ffd2, "fc_seq_els_rsp_send" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xc44e5013, "dev_get_by_name" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xf3d58801, "fc_fcp_init" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xffbbb960, "fc_disc_config" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0x71fe4663, "fc_elsct_init" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9f56fac2, "fc_vport_id_lookup" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x674fc839, "device_register" },
	{ 0x712e52f7, "current_task" },
	{ 0x96d32183, "__ethtool_get_link_ksettings" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0xa3aa827a, "fc_exch_recv" },
	{ 0x67f0ef6a, "fc_lport_set_local_id" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9166fada, "strncpy" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x98001cfc, "init_net" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x4e08940e, "fc_lport_reset" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xfcca95e8, "fc_linkdown" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc45bc2bf, "fc_rport_login" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2875ab42, "fc_disc_init" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x8e29824d, "fc_rport_logoff" },
	{ 0x37a0cba, "kfree" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x9d50ed7e, "fc_rport_destroy" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa072a16, "fc_lport_init" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe48af658, "__put_page" },
	{ 0x18132828, "dev_get_stats" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x1d74577e, "fc_rport_lookup" },
};

MODULE_INFO(depends, "libfc");


MODULE_INFO(srcversion, "67D64332C5A69F76C57A99E");
