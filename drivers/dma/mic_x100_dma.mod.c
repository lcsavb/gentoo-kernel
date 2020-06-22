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
	{ 0xda584c89, "single_release" },
	{ 0xae254cfe, "seq_read" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x1963a81b, "mbus_unregister_driver" },
	{ 0x76fdfda8, "mbus_register_driver" },
	{ 0x5a04d103, "dma_sync_wait" },
	{ 0x23e4381a, "dma_async_tx_descriptor_init" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd517f601, "seq_puts" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xe484e35f, "ioread32" },
	{ 0x999e8297, "vfree" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0xdc996808, "dmaenginem_async_device_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x40120314, "single_open" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1a281859, "pv_ops" },
};

MODULE_INFO(depends, "mic_bus");


MODULE_INFO(srcversion, "3B1D50D8DEEC603458BC1D9");
