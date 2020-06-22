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
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x2890a329, "sst_register_dsp" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0xfdaf7101, "sst_unregister_dsp" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x28a8c058, "pm_qos_add_request" },
	{ 0xa41935ec, "pm_qos_remove_request" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x1a281859, "pv_ops" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3801776b, "__ioread32_copy" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xe4233013, "pm_qos_update_request" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa4d6f89a, "release_firmware" },
};

MODULE_INFO(depends, "snd-soc-sst-atom-hifi2-platform");


MODULE_INFO(srcversion, "B131B935C42FC57EE2D8DEA");
