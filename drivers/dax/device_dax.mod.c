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
	{ 0xe41f5805, "cdev_set_parent" },
	{ 0x83c005b8, "cdev_del" },
	{ 0xeeaa7fe8, "inode_dax" },
	{ 0xc81cd1be, "cdev_init" },
	{ 0xd9302a67, "kill_dev_dax" },
	{ 0xa3628dbe, "vmf_insert_pfn_pud" },
	{ 0xd16d2229, "vmf_insert_pfn_pmd" },
	{ 0x77358855, "iomem_resource" },
	{ 0xac6bd201, "vmf_insert_mixed" },
	{ 0x3f84bcd7, "dax_alive" },
	{ 0xd0db0f12, "run_dax" },
	{ 0xce5597f7, "devm_memremap_pages" },
	{ 0xd84d35bd, "dax_read_lock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x59e23b0, "__dax_driver_register" },
	{ 0x40810fee, "noop_set_page_dirty" },
	{ 0x17475388, "_dev_warn" },
	{ 0xd1dfaeca, "noop_invalidatepage" },
	{ 0x712e52f7, "current_task" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0xb28778a1, "dax_inode" },
	{ 0xd6b026e3, "linear_hugepage_index" },
	{ 0xb4446279, "cdev_add" },
	{ 0x8eee3399, "dax_read_unlock" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8b910be2, "errseq_sample" },
	{ 0x3f914453, "dax_driver_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0B683564695A87C59D5AF87");
