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
	{ 0x2d3385d3, "system_wq" },
	{ 0x3120ffbb, "bus_register" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x754d539c, "strlen" },
	{ 0x1db7706b, "__copy_user_nocache" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xfa372803, "dmaengine_unmap_put" },
	{ 0x17475388, "_dev_warn" },
	{ 0x674fc839, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb2993477, "dmaengine_get_unmap_data" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x5a04d103, "dma_sync_wait" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5a921311, "strncmp" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x14e3066b, "ntb_unregister_client" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6a683da4, "simple_open" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x76c8976b, "dma_direct_map_resource" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd811fa6f, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0x94bd2068, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3a9c99c7, "ntb_default_peer_port_count" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1d624694, "__ntb_register_client" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcb10622b, "__dma_request_channel" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0xd1e8bffb, "param_ops_byte" },
	{ 0xb44c9324, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x89112ad2, "ntb_clear_ctx" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4174c002, "param_ops_ulong" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x250382fa, "ntb_link_event" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x9b4f6be5, "ntb_set_ctx" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "0B266B7C7CE6B6E7F86D619");
