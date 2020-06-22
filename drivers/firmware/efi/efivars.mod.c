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
	{ 0x3d38ff95, "module_layout" },
	{ 0x9121d184, "kobject_put" },
	{ 0xf92bed33, "kset_create_and_add" },
	{ 0xc3095f9a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7a378707, "sysfs_remove_bin_file" },
	{ 0x968f9a23, "efivar_entry_iter_begin" },
	{ 0x754d539c, "strlen" },
	{ 0x85c54b61, "efivar_validate" },
	{ 0x465e24ff, "ucs2_utf8size" },
	{ 0x17b37f9e, "kobject_uevent" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x705aa88a, "efivar_entry_set" },
	{ 0x5cd891a7, "current_task" },
	{ 0x59e5619b, "efivar_entry_remove" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xefda029b, "kobject_init_and_add" },
	{ 0xad5737fc, "efivar_init" },
	{ 0xa0f493d9, "efi" },
	{ 0x4b0a70e, "efivar_entry_find" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd7399d2a, "efivar_entry_iter_end" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf4df02b6, "efivar_entry_get" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf9898015, "kmem_cache_alloc_trace" },
	{ 0xfb97d05e, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xda01623d, "efivar_entry_add" },
	{ 0x308f6cc1, "__efivar_entry_delete" },
	{ 0x443f5826, "sysfs_create_bin_file" },
	{ 0x7c681aba, "efivar_work" },
	{ 0xbc65a876, "__efivar_entry_iter" },
	{ 0x23e36a33, "efivars_kobject" },
	{ 0x4336fcca, "ucs2_as_utf8" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D1A4FF9E993BD4F4F6E496B");
