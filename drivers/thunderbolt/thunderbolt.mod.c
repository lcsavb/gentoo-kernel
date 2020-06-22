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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3120ffbb, "bus_register" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xf4e1c6b6, "pci_bus_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0xccfbeafd, "driver_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9c6098c5, "crypto_alloc_shash" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0x9fabd33, "nvmem_register" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6b705573, "pci_find_pcie_root_port" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0x999e8297, "vfree" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5b7da2ca, "pm_runtime_no_callbacks" },
	{ 0xb67fec0e, "uuid_parse" },
	{ 0xba1008c8, "__crc32c_le" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x17475388, "_dev_warn" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x7533a30b, "device_del" },
	{ 0x674fc839, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xea8f6ba2, "device_find_child" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xaa14636c, "crypto_shash_digest" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x768a0f22, "pci_device_is_present" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x1fd765f7, "device_property_read_u8_array" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x45cd73e1, "device_add" },
	{ 0xe9f49df9, "bus_find_device" },
	{ 0x1f5917ce, "crypto_shash_setkey" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xa502c98, "dmar_platform_optin" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x6866139b, "bus_for_each_dev" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4d0aad66, "iommu_present" },
	{ 0x2e29fe3, "device_for_each_child_reverse" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0x94bd2068, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd3b9e080, "device_for_each_child" },
	{ 0x556cca46, "x86_apple_machine" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xccf4b493, "nvmem_unregister" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8dd80ad2, "dma_pool_create" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xca3f7f32, "pci_find_ext_capability" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00001513sv00002222sd00001111bc08sc80i00*");
MODULE_ALIAS("pci:v00008086d00001547sv00002222sd00001111bc08sc80i00*");
MODULE_ALIAS("pci:v00008086d0000156Asv*sd*bc08sc80i00*");
MODULE_ALIAS("pci:v00008086d0000156Csv*sd*bc08sc80i00*");
MODULE_ALIAS("pci:v00008086d00001575sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001577sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008A17sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008A0Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7B7BFFEFAA1511CADA5F6C9");
