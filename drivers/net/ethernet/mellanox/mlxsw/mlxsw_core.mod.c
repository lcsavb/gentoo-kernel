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
	{ 0x6d840fec, "devlink_port_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x67e2c50f, "devlink_reload_enable" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xc1b14de8, "hwmon_device_register_with_groups" },
	{ 0x7100fd82, "devlink_reload_disable" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x926be065, "thermal_cooling_device_unregister" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0xa3659b5f, "__tracepoint_devlink_hwerr" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6e609283, "devlink_resources_unregister" },
	{ 0xc310b981, "strnstr" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x993dfb13, "devlink_alloc" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0x1a281859, "pv_ops" },
	{ 0x50a63f93, "__tracepoint_devlink_hwmsg" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1dbaba6c, "devlink_port_type_ib_set" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa26b093e, "devlink_params_publish" },
	{ 0x734ecbd7, "thermal_zone_device_register" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0x1567346e, "devlink_port_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x90688bcd, "devlink_info_driver_name_put" },
	{ 0x7ab0a5fd, "thermal_zone_bind_cooling_device" },
	{ 0x2a85b29, "devlink_is_reload_failed" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x285e7e0a, "devlink_params_unpublish" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb1647fc2, "devlink_info_version_running_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x915660a4, "thermal_zone_unbind_cooling_device" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0xd889e486, "devlink_free" },
	{ 0xb9521ad4, "thermal_cooling_device_register" },
	{ 0xd947f2be, "devlink_port_type_clear" },
	{ 0x3889342c, "devlink_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa86a1df4, "devlink_port_attrs_set" },
	{ 0xe919636a, "thermal_zone_device_update" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x607c4683, "devlink_info_version_fixed_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x5fb72227, "devlink_unregister" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9b93ff4a, "devlink_port_type_eth_set" },
	{ 0x68afda08, "thermal_zone_device_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "66905856723A27FCD560891");
