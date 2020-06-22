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
	{ 0xc22114fa, "kset_unregister" },
	{ 0xe45fa038, "kobject_put" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0x8b360d50, "pci_get_domain_bus_and_slot" },
	{ 0x274a25f4, "sysfs_create_file_ns" },
	{ 0xff98fde2, "kobject_init_and_add" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xbad041a1, "kset_create_and_add" },
	{ 0x6ae8efd, "firmware_kobj" },
	{ 0xc5850110, "printk" },
	{ 0x5a921311, "strncmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11089ac7, "_ctype" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x607b34f1, "edd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "08CDD7FB96C03BC2CEEC7DE");
