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
	{ 0x79e407e6, "param_ops_bool" },
	{ 0x544a7913, "pstore_unregister" },
	{ 0x1de50dae, "pstore_register" },
	{ 0x23e36a33, "efivars_kobject" },
	{ 0xa0f493d9, "efi" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9898015, "kmem_cache_alloc_trace" },
	{ 0xc3095f9a, "kmalloc_caches" },
	{ 0xd1e173f, "__efivar_entry_get" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5c66e90c, "efivar_run_worker" },
	{ 0x81b03377, "efivar_entry_set_safe" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9121d184, "kobject_put" },
	{ 0xd7399d2a, "efivar_entry_iter_end" },
	{ 0xbc65a876, "__efivar_entry_iter" },
	{ 0xa62892c6, "efivar_sysfs_list" },
	{ 0x968f9a23, "efivar_entry_iter_begin" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x308f6cc1, "__efivar_entry_delete" },
	{ 0x9d61e994, "ucs2_strncmp" },
	{ 0x702946da, "ucs2_strlen" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "efivars");


MODULE_INFO(srcversion, "3BB59B04542680D8409301C");
