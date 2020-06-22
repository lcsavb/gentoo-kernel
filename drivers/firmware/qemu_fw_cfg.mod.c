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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x6ae8efd, "firmware_kobj" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc5850110, "printk" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1bf55fc, "paddr_vmcoreinfo_note" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0x1a281859, "pv_ops" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd7aa4ba8, "kset_register" },
	{ 0x8a82f25d, "kobject_set_name" },
	{ 0x6914ae3f, "kset_find_obj" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe021294, "sysfs_create_bin_file" },
	{ 0x37a0cba, "kfree" },
	{ 0xff98fde2, "kobject_init_and_add" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x274a25f4, "sysfs_create_file_ns" },
	{ 0xcbf38353, "platform_get_resource_byname" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x85bd1608, "__request_region" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0xbad041a1, "kset_create_and_add" },
	{ 0x49a686c3, "kobject_create_and_add" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x27864d57, "memparse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0xa805ecfc, "acpi_release_global_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf441ac43, "ioread8_rep" },
	{ 0xf10de535, "ioread8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc9f34c1d, "acpi_acquire_global_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x22007034, "kobject_del" },
	{ 0x1b069d36, "sysfs_remove_file_ns" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc22114fa, "kset_unregister" },
	{ 0xe45fa038, "kobject_put" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:QEMU0002:*");
MODULE_ALIAS("of:N*T*Cqemu,fw-cfg-mmio");
MODULE_ALIAS("of:N*T*Cqemu,fw-cfg-mmioC*");

MODULE_INFO(srcversion, "570D259F87DB5DF3F1E962D");
