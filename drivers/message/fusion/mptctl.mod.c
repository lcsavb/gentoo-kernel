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
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x74a0134a, "mpt_device_driver_deregister" },
	{ 0x4c441a2a, "mpt_event_register" },
	{ 0x815cead0, "mpt_reset_register" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0x867234, "misc_deregister" },
	{ 0x8e8b6525, "mpt_register" },
	{ 0x2e76b019, "misc_register" },
	{ 0x11a68ca3, "mpt_device_driver_register" },
	{ 0xd36e0a68, "mpt_HardResetHandler" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9166fada, "strncpy" },
	{ 0x21315a4d, "mpt_alloc_fw_memory" },
	{ 0x1351fb68, "mpt_free_fw_memory" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x8cc88aa2, "mpt_verify_adapter" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x5c82944, "__scsi_iterate_devices" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x754d539c, "strlen" },
	{ 0xedc94c86, "mpt_put_msg_frame" },
	{ 0xf1bc0fe4, "mpt_GetIocState" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x8692e07f, "mpt_config" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb7dcd7a5, "mpt_halt_firmware" },
	{ 0x3f495a5e, "mpt_Soft_Hard_ResetHandler" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x47885b59, "mpt_put_msg_frame_hi_pri" },
	{ 0xcb6fa083, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x3013ee21, "mpt_send_handshake_request" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe71b661d, "mpt_get_msg_frame" },
	{ 0xceac44f4, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x95536bb7, "fasync_helper" },
	{ 0xdd805159, "ioc_list" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x29361773, "complete" },
	{ 0xf7617ce2, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0xc5850110, "printk" },
	{ 0x566257fc, "kill_fasync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "FD0EDD7A1D4E32B40E16283");
