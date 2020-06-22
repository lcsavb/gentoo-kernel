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
	{ 0xe45fa038, "kobject_put" },
	{ 0xbad041a1, "kset_create_and_add" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6ae8efd, "firmware_kobj" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xff98fde2, "kobject_init_and_add" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xc22114fa, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9F75765FDAF00D1763D42C5");
