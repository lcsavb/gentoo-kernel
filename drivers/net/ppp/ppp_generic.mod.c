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
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0x53b954a2, "up_read" },
	{ 0x377de0d8, "bpf_prog_create" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x32e0924e, "__register_chrdev" },
	{ 0x2524b0e1, "bpf_prog_destroy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xcb785b84, "__put_net" },
	{ 0x1a281859, "pv_ops" },
	{ 0x12cdcbe8, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x712e52f7, "current_task" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x85a3113a, "netdev_printk" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0xe629aceb, "device_create" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x7419e1ca, "fput" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x681e3cee, "module_put" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x48e524e, "skb_pull_rcsum" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf31ec237, "iov_iter_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8edd97ea, "fget" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x33650c48, "class_destroy" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x3e2e6264, "__class_create" },
	{ 0x6405dcd3, "slhc_toss" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa9e6af54, "try_module_get" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "8E3408428004B5160FD7F88");
