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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0x9b3549d0, "fw_device_enable_phys_dma" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xccfbeafd, "driver_register" },
	{ 0xae7bff39, "__scsi_add_device" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x21c6fd0a, "scsi_block_requests" },
	{ 0x61ebf7fd, "blk_queue_max_hw_sectors" },
	{ 0x80bbc9c3, "scsi_remove_device" },
	{ 0x86915dc9, "fw_send_request" },
	{ 0xf0d612a3, "scsi_unblock_requests" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x353d3abf, "fw_bus_type" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3c56ef91, "fw_workqueue" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xc9437a2d, "blk_queue_update_dma_alignment" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xcd818db9, "fw_cancel_transaction" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1c406b28, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x84d83c1d, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc9d1684e, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x906d5355, "fw_run_transaction" },
	{ 0x60c44378, "fw_send_response" },
	{ 0x75b94a14, "scsi_dma_map" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp0000609Ever00010483*");

MODULE_INFO(srcversion, "C5B1A3C043CBEAD0665AF3C");
