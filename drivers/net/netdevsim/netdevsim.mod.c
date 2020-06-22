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
	{ 0x6d840fec, "devlink_port_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3120ffbb, "bus_register" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67e2c50f, "devlink_reload_enable" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x91230469, "xdp_attachment_flags_ok" },
	{ 0x7100fd82, "devlink_reload_disable" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x40120314, "single_open" },
	{ 0x1f563160, "bpf_offload_dev_priv" },
	{ 0x5ae0ff73, "devlink_param_driverinit_value_get" },
	{ 0x6cf490a3, "bpf_offload_dev_create" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xda584c89, "single_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x85d8ab19, "xdp_attachment_query" },
	{ 0x2b34101e, "bpf_offload_dev_netdev_unregister" },
	{ 0xd66e4063, "devlink_resource_size_get" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6e609283, "devlink_resources_unregister" },
	{ 0x2d4d8db3, "devlink_traps_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x993dfb13, "devlink_alloc" },
	{ 0x8ef7a916, "devlink_params_register" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x4186091d, "xdp_attachment_setup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xae254cfe, "seq_read" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7beaa7c, "devlink_trap_report" },
	{ 0x4240cb3b, "debugfs_create_u32" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x674fc839, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1d695fb9, "devlink_resource_occ_get_register" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa26b093e, "devlink_params_publish" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x97bb553e, "bpf_offload_dev_match" },
	{ 0xfc3bba0f, "unregister_fib_notifier" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd22d728, "devlink_region_snapshot_create" },
	{ 0x6a683da4, "simple_open" },
	{ 0xfa3ff314, "debugfs_create_bool" },
	{ 0x98001cfc, "init_net" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x1567346e, "devlink_port_unregister" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x352ec68b, "bpf_offload_dev_destroy" },
	{ 0x55b2d495, "devlink_param_driverinit_value_set" },
	{ 0xeb39b2b3, "devlink_region_create" },
	{ 0x50b49039, "flow_block_cb_setup_simple" },
	{ 0xd23499dd, "devlink_flash_update_begin_notify" },
	{ 0xafdada7b, "devlink_flash_update_end_notify" },
	{ 0x248019e7, "bpf_verifier_log_write" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xc90059ce, "devlink_resource_register" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x2c4fce93, "devlink_flash_update_status_notify" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x5b5c570a, "devlink_traps_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0xd889e486, "devlink_free" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0xd947f2be, "devlink_port_type_clear" },
	{ 0x3889342c, "devlink_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x6187ea6f, "devlink_region_shapshot_id_get" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa86a1df4, "devlink_port_attrs_set" },
	{ 0xde054258, "devlink_params_unregister" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0xee8fcad, "debugfs_create_symlink" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x6cff3b90, "register_fib_notifier" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xa410a295, "devlink_region_destroy" },
	{ 0x5fb72227, "devlink_unregister" },
	{ 0xfa9f6a3f, "bpf_offload_dev_netdev_register" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9b93ff4a, "devlink_port_type_eth_set" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DC5A51187E5923248C2EF9D");
