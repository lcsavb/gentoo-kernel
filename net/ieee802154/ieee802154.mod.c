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
	{ 0x9cce7054, "class_find_device" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbcb7f597, "get_net_ns_by_fd" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xa4cbf88a, "genl_register_family" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x1bd2159d, "genl_unregister_family" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3483fcc7, "dev_change_net_namespace" },
	{ 0xc44e5013, "dev_get_by_name" },
	{ 0xa3fb3cf6, "device_match_name" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc835b3fd, "trace_event_buffer_reserve" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x84a629fe, "get_net_ns_by_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcb785b84, "__put_net" },
	{ 0xb48f44d8, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x99b17d7a, "trace_define_field" },
	{ 0xbc9e6657, "dev_set_mac_address" },
	{ 0x7533a30b, "device_del" },
	{ 0x6bd55222, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x1b13d538, "class_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4819d039, "trace_event_reg" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xb55f8321, "dev_get_by_index" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0x45cd73e1, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x98001cfc, "init_net" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0xa985eae7, "perf_trace_run_bpf_submit" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x42769eca, "class_for_each_device" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x496e2a71, "netlink_broadcast" },
	{ 0x59478097, "trace_event_ignore_this_pid" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x934d4cb7, "genl_family_attrbuf" },
	{ 0x291bec8a, "trace_event_buffer_commit" },
	{ 0x6b73d04b, "device_rename" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x226a6bd8, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4e01, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x3092b99f, "trace_event_raw_init" },
	{ 0x87b4e7fb, "genlmsg_put" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xd56c8357, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x637bb1f5, "trace_output_call" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb1b5ece7, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "10F8468F340C701824AF3A3");
