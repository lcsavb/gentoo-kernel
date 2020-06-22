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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3120ffbb, "bus_register" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x9dba1d92, "input_alloc_absinfo" },
	{ 0xd3053e57, "irq_find_mapping" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdff396a7, "serio_interrupt" },
	{ 0xa4181659, "irq_create_mapping" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x1a281859, "pv_ops" },
	{ 0x13317307, "devm_kasprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xad0cba41, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x64c76711, "serio_unregister_port" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xbd7d7c01, "__irq_domain_add" },
	{ 0x17475388, "_dev_warn" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x7533a30b, "device_del" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x9166fada, "strncpy" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0x45cd73e1, "device_add" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x4109798, "handle_simple_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x94bd2068, "put_device" },
	{ 0x7da8cda7, "irq_set_chip_and_handler_name" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x99848818, "irq_domain_simple_ops" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x42ef0b56, "__serio_register_port" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0x96848186, "scnprintf" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x65b03470, "irq_domain_remove" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd9a25476, "input_mt_sync_frame" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x4d1775b1, "input_mt_assign_slots" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "78BD75CE61416439554F675");
