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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdecb5a4c, "v4l2_async_register_subdev" },
	{ 0xcb1d454c, "fwnode_graph_get_remote_port_parent" },
	{ 0xbe7c83c9, "fwnode_handle_put" },
	{ 0x65a84358, "v4l2_async_subdev_notifier_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x109c8a51, "v4l2_async_notifier_cleanup" },
	{ 0x61da1318, "v4l2_async_notifier_init" },
	{ 0xa0d613cb, "fwnode_get_next_parent" },
	{ 0x551a1b6c, "fwnode_device_is_available" },
	{ 0xc359deee, "v4l2_async_notifier_add_subdev" },
	{ 0x5db40570, "fwnode_property_present" },
	{ 0x17475388, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0xd1f5a485, "v4l2_async_notifier_add_fwnode_subdev" },
	{ 0xb73ae5e, "is_acpi_data_node" },
	{ 0xd59e9f46, "fwnode_property_read_u64_array" },
	{ 0x94e7f5f2, "fwnode_property_read_u32_array" },
	{ 0x733d67d5, "fwnode_graph_parse_endpoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xde0fe06f, "fwnode_get_parent" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc2002f7c, "fwnode_property_get_reference_args" },
	{ 0xdaaf0a52, "fwnode_get_next_child_node" },
	{ 0x53d5682f, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2227662, "fwnode_graph_get_next_endpoint" },
	{ 0xc24a36af, "dev_fwnode" },
	{ 0x41175894, "fwnode_graph_get_remote_endpoint" },
	{ 0x6a818f7c, "v4l2_async_notifier_unregister" },
	{ 0xbead065b, "is_acpi_device_node" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "76874DAA410041C9A2D1AF2");
