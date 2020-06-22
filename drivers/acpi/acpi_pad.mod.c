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
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xf418ec16, "set_cpus_allowed_ptr" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xfb578fc5, "memset" },
	{ 0x211130c1, "alloc_cpumask_var" },
	{ 0x56398615, "mark_tsc_unstable" },
	{ 0x1000e51, "schedule" },
	{ 0xf09cc34, "schedule_timeout_killable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x2b67b6b7, "mds_idle_clear" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xbfe5616d, "tick_broadcast_oneshot_control" },
	{ 0x5c5a1b16, "tick_broadcast_control" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8df2c488, "sched_setscheduler" },
	{ 0x712e52f7, "current_task" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x96848186, "scnprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc42dcb99, "acpi_evaluate_ost" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000C:*");

MODULE_INFO(srcversion, "21671392E9F0283B30EBE4A");
