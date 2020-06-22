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
	{ 0x9162b424, "mei_cldev_driver_unregister" },
	{ 0x29690eef, "__mei_cldev_driver_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x9e2911bf, "component_master_add_with_match" },
	{ 0x16f29ddb, "component_match_add_typed" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x9d35578c, "mei_cldev_enable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95a159a, "mei_cldev_recv" },
	{ 0x5069cd63, "mei_cldev_send" },
	{ 0x4ce29792, "component_bind_all" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8baa3a67, "component_unbind_all" },
	{ 0xcbae8d8a, "mei_cldev_disable" },
	{ 0xe69b3873, "mei_cldev_set_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x390aab3, "component_master_del" },
	{ 0xd6065571, "mei_cldev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("mei:*:b638ab7e-94e2-4ea2-a552-d1c54b627f04:*:*");

MODULE_INFO(srcversion, "604EADB816C38ABA40B9C1C");
