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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x3e38e6a2, "param_ops_string" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x999e8297, "vfree" },
	{ 0xc23e8daf, "root_device_unregister" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x3120ffbb, "bus_register" },
	{ 0x1d1cf8ba, "__root_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x674fc839, "device_register" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x5c82944, "__scsi_iterate_devices" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x8ac743de, "sg_copy_buffer" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x300ec66e, "blk_abort_request" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xa14bde6a, "blk_mq_unique_tag" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0xf072fe37, "sg_miter_stop" },
	{ 0xf565b5ec, "sg_miter_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x84dbf06e, "sg_miter_start" },
	{ 0x96848186, "scnprintf" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "77936F54DBB4A75843BDC1B");
