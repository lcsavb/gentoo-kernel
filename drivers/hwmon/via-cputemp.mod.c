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
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x8c14b8e3, "hwmon_device_register" },
	{ 0x77989b7e, "device_create_file" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0007mod*:feature:*");

MODULE_INFO(srcversion, "C27DC61C8BA39765B93B519");
