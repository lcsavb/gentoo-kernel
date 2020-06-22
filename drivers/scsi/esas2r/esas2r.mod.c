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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0x71df4628, "sysfs_remove_bin_file" },
	{ 0xef180f0a, "pci_release_region" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x80bbc9c3, "scsi_remove_device" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xd517f601, "seq_puts" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x74a5312f, "pcie_capability_read_dword" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x32e0924e, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x980d5910, "dma_get_required_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa6ac98, "seq_putc" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xeb552a8c, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1c406b28, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x6b5eeab4, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0x382d4dfd, "param_ops_long" },
	{ 0xedc03953, "iounmap" },
	{ 0xe021294, "sysfs_create_bin_file" },
	{ 0xcf2a6966, "up" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x62a2a42, "scsi_report_bus_reset" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0x407dd9dc, "proc_create" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x89121d5c, "pci_request_region" },
	{ 0xce7eddce, "pcie_capability_write_word" },
	{ 0x207655d3, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x75b94a14, "scsi_dma_map" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd00000049bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Abc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Bbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Cbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Dbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Ebc*sc*i*");

MODULE_INFO(srcversion, "6FD17F8E8CC404B05896F70");
