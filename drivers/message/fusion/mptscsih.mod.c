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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0x21c6fd0a, "scsi_block_requests" },
	{ 0xceac44f4, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0xd36e0a68, "mpt_HardResetHandler" },
	{ 0xf0d612a3, "scsi_unblock_requests" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xe71b661d, "mpt_get_msg_frame" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb7dcd7a5, "mpt_halt_firmware" },
	{ 0x3d706090, "scsi_print_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa7b4aea9, "mpt_raid_phys_disk_get_num_paths" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3013ee21, "mpt_send_handshake_request" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xedc94c86, "mpt_put_msg_frame" },
	{ 0x70b8cbf2, "mpt_resume" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3f495a5e, "mpt_Soft_Hard_ResetHandler" },
	{ 0xf1bc0fe4, "mpt_GetIocState" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xbf6f3aa0, "mpt_raid_phys_disk_pg1" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0x46c6e08, "mpt_print_ioc_summary" },
	{ 0xafe0bdcb, "blk_queue_dma_alignment" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcb6fa083, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xea699809, "mpt_suspend" },
	{ 0x8c317216, "mpt_detach" },
	{ 0xf7617ce2, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0x75b94a14, "scsi_dma_map" },
	{ 0x47885b59, "mpt_put_msg_frame_hi_pri" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "753310B2CC278A39D62F31F");
