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
	{ 0x517c5f9a, "vchan_tx_submit" },
	{ 0x389a974c, "vchan_find_desc" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x87b8798d, "sg_next" },
	{ 0x23e4381a, "dma_async_tx_descriptor_init" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfec2f420, "dma_async_device_register" },
	{ 0x4240cb3b, "debugfs_create_u32" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7bf29cd, "get_cached_msi_msg" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbfe43a2b, "vchan_tx_desc_free" },
	{ 0x6dd40f18, "simple_attr_release" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8259f845, "debugfs_create_file_unsafe" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6a9222b2, "debugfs_attr_read" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfd6a73ea, "debugfs_create_u16" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf7b06e68, "dma_async_device_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x761c01a2, "debugfs_attr_write" },
	{ 0xf51a7aa3, "simple_attr_open" },
	{ 0xd3c5f076, "vchan_init" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5646FB424C2A70A6436A84D");
