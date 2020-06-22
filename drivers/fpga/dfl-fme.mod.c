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
	{ 0x843e1d9a, "dfl_fpga_cdev_release_port" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x9331ee8c, "dfl_fpga_cdev_assign_port" },
	{ 0x21578dbb, "dfl_fpga_dev_ops_register" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2a4d99c2, "fpga_image_info_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0x3cdbf383, "dfl_fpga_dev_feature_uinit" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x712e52f7, "current_task" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x94bd2068, "put_device" },
	{ 0xbe20bcc2, "dfl_fpga_dev_feature_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x74a28b80, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb2b884c, "fpga_bridges_put" },
	{ 0xf3057836, "dfl_fpga_dev_ops_unregister" },
	{ 0x13e1fa46, "fpga_image_info_free" },
	{ 0x96848186, "scnprintf" },
	{ 0xcc78952e, "fpga_region_program_fpga" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xd297603d, "fpga_region_class_find" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x28753ca8, "platform_device_put" },
};

MODULE_INFO(depends, "dfl,fpga-mgr,fpga-bridge,fpga-region");


MODULE_INFO(srcversion, "077356B10F52BD543F2D9CA");
