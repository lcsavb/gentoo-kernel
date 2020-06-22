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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x22932a8, "sdw_master_read_prop" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x40120314, "single_open" },
	{ 0x34712074, "sdw_cdns_irq" },
	{ 0x9f5c0bff, "sdw_delete_bus_master" },
	{ 0xda584c89, "single_release" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3fbb1037, "sdw_cdns_probe" },
	{ 0xc8eba256, "device_get_named_child_node" },
	{ 0xae609646, "sdw_stream_add_master" },
	{ 0x2f04789c, "snd_soc_register_component" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xae254cfe, "seq_read" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xba0a39bc, "sdw_add_bus_master" },
	{ 0xa76a6fcb, "sdw_cdns_thread" },
	{ 0xf31dfdec, "cdns_xfer_msg" },
	{ 0xb74a1dde, "cdns_xfer_msg_defer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x3ecf2f9d, "snd_soc_unregister_component" },
	{ 0xd251cbf0, "sdw_stream_remove_master" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x94e7f5f2, "fwnode_property_read_u32_array" },
	{ 0x6be620fc, "cdns_set_sdw_stream" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab33992a, "cdns_bus_conf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4766954c, "sdw_cdns_get_stream" },
	{ 0x3e4386d, "sdw_cdns_config_stream" },
	{ 0xfa0ba84d, "sdw_cdns_alloc_stream" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x8622baf5, "sdw_cdns_enable_interrupt" },
	{ 0x969637de, "sdw_cdns_debugfs_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc3ec050c, "sdw_cdns_init" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x685e421a, "cdns_reset_page_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5d9aa79b, "sdw_cdns_pdi_init" },
};

MODULE_INFO(depends, "snd-pcm,soundwire-cadence,snd-soc-core");


MODULE_INFO(srcversion, "6E147FAB6D9C1DB441C5C14");
