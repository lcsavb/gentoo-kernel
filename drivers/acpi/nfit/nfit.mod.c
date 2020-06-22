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
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0xea0d5493, "nvdimm_cmd_mask" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4cab655e, "nd_blk_region_provider_data" },
	{ 0xdacebd18, "nd_blk_region_to_dimm" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x2d56b737, "nvdimm_bus_attribute_group" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xf6a28554, "region_intersects" },
	{ 0xaf076aec, "nd_fletcher64" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0x51086598, "nvdimm_attribute_group" },
	{ 0x8f2703b7, "wbinvd_on_all_cpus" },
	{ 0x855191ea, "nd_blk_region_set_provider_data" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd1c3ec83, "nvdimm_kobj" },
	{ 0xf15b37a7, "nvdimm_pmem_region_create" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xcba4abe3, "list_sort" },
	{ 0xfa03645f, "kernfs_put" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1877ca13, "mce_is_memory_error" },
	{ 0x3572b41b, "nd_cmd_in_size" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x48fa74ca, "nd_region_dev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1b4005c1, "nvdimm_bus_register" },
	{ 0x1a281859, "pv_ops" },
	{ 0xa5b700d8, "nvdimm_to_bus" },
	{ 0x3e4bc5f0, "nd_numa_attribute_group" },
	{ 0xaff7c392, "nvdimm_in_overwrite" },
	{ 0x5eb18f9c, "nvdimm_flush" },
	{ 0x5f23e3fa, "insert_resource" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xb9133164, "nd_region_acquire_lane" },
	{ 0xb0c6036d, "nvdimm_provider_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4f22e2a9, "nvdimm_volatile_region_create" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x912f2e61, "devm_nvdimm_memremap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x161efb90, "nd_region_attribute_group" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xfa297415, "acpi_map_pxm_to_node" },
	{ 0xd5caee1a, "to_nvdimm_bus_dev" },
	{ 0xa61f67fd, "nvdimm_name" },
	{ 0x1e315d1c, "nd_blk_memremap_flags" },
	{ 0x35f03a67, "kernfs_find_and_get_ns" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0xb182155d, "nvdimm_bus_unregister" },
	{ 0xb501b2df, "nd_cmd_dimm_desc" },
	{ 0x729e4aaa, "nd_mapping_attribute_group" },
	{ 0xe3a53f4c, "sort" },
	{ 0x5eaf6ebf, "nd_cmd_out_size" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0xa191c788, "nd_region_release_lane" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x401edfe8, "nd_device_attribute_group" },
	{ 0x4ba07db4, "to_nd_desc" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0xc2c5802, "work_busy" },
	{ 0xb2db2d5, "remove_resource" },
	{ 0x4bb0705d, "nvdimm_has_flush" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa8d8b0d0, "acpi_find_child_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8e0d8863, "to_nvdimm_bus" },
	{ 0x7224ac98, "kernfs_notify" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x4b1d94aa, "mce_is_correctable" },
	{ 0x8384647a, "acpi_map_pxm_to_online_node" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x30d08cca, "nvdimm_bus_check_dimm_count" },
	{ 0x51c663d6, "to_nd_region" },
	{ 0x2a0f28f4, "__nvdimm_create" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0xae773df1, "to_nvdimm" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xa01a8d9b, "nd_cmd_bus_desc" },
	{ 0x4174c002, "param_ops_ulong" },
	{ 0x7b1180a8, "nvdimm_bus_add_badrange" },
	{ 0xd34f2663, "nd_region_provider_data" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x174ef6c2, "mce_usable_address" },
	{ 0x5b083034, "to_nd_blk_region" },
	{ 0x5879dac4, "nvdimm_region_notify" },
	{ 0x2225c692, "nvdimm_blk_region_create" },
};

MODULE_INFO(depends, "libnvdimm");

MODULE_ALIAS("acpi*:ACPI0012:*");

MODULE_INFO(srcversion, "1F21DE13AD99E5C90F403B3");
