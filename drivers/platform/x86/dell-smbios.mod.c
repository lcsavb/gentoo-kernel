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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb43ec756, "__wmi_driver_register" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x765326d4, "set_required_buffer_size" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x8eef8246, "dell_wmi_get_hotfix" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x60a4c06b, "wmi_driver_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0xf621dfc1, "platform_device_del" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa385320, "wmidev_evaluate_method" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa3dcfa65, "dell_wmi_get_descriptor_valid" },
	{ 0xa75079d6, "dcdbas_smi_request" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x94bd2068, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd94181ab, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xa167d064, "dell_wmi_get_size" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x28753ca8, "platform_device_put" },
};

MODULE_INFO(depends, "wmi,dell-wmi-descriptor,dcdbas");

MODULE_ALIAS("wmi:A80593CE-A997-11DA-B012-B622A1EF5492");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*10*:");
MODULE_ALIAS("dmi*:svn*DellComputerCorporation*:ct*8*:");

MODULE_INFO(srcversion, "E488E980CF93459D3F7F7F8");
