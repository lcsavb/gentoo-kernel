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
	{ 0x40120314, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x7daaf29f, "usb_debug_root" },
	{ 0x2a6c0ed2, "typec_match_altmode" },
	{ 0x7e2998e7, "typec_set_pwr_role" },
	{ 0xda584c89, "single_release" },
	{ 0xbdc0f3c8, "typec_altmode_notify" },
	{ 0x493159cc, "typec_partner_set_identity" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7283bc83, "typec_unregister_altmode" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x5db40570, "fwnode_property_present" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x70aff7e1, "fwnode_property_read_string" },
	{ 0xae254cfe, "seq_read" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x195b708e, "power_supply_changed" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6ddb10ad, "typec_register_port" },
	{ 0x2d1e301d, "typec_find_power_role" },
	{ 0x17475388, "_dev_warn" },
	{ 0xe0503b42, "power_supply_get_drvdata" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xda0a9c4c, "typec_unregister_port" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4ec6fbb2, "typec_altmode_vdm" },
	{ 0x9049491e, "typec_find_port_data_role" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x5f2c6469, "typec_set_data_role" },
	{ 0x59aad8, "typec_altmode_attention" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x5ac3a632, "typec_set_vconn_role" },
	{ 0xa6f3d19, "typec_altmode_update_active" },
	{ 0x36852716, "typec_set_orientation" },
	{ 0x94e7f5f2, "fwnode_property_read_u32_array" },
	{ 0x33fd62de, "typec_set_pwr_opmode" },
	{ 0x9cad8da6, "typec_unregister_partner" },
	{ 0xbc821c40, "typec_partner_register_altmode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x54c93810, "typec_set_mode" },
	{ 0x90ed21c, "devm_power_supply_register" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc24a36af, "dev_fwnode" },
	{ 0x96848186, "scnprintf" },
	{ 0xeafc1eb8, "typec_find_port_power_role" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15968208, "typec_port_register_altmode" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xb6101e02, "usb_role_switch_get" },
	{ 0x9a00a11c, "typec_register_partner" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xceb66bec, "sched_clock_cpu" },
};

MODULE_INFO(depends, "typec,roles");


MODULE_INFO(srcversion, "FA44B7C3074DD24278E5E03");
