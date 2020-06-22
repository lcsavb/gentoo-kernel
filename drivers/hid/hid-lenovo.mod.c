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
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0x17475388, "_dev_warn" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x2f7b44a9, "hid_validate_values" },
	{ 0x754d539c, "strlen" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0xae359c03, "__hid_request" },
	{ 0xad0cba41, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x80171127, "hid_hw_stop" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000017EFp00006009");
MODULE_ALIAS("hid:b0003g*v000017EFp00006047");
MODULE_ALIAS("hid:b0005g*v000017EFp00006048");
MODULE_ALIAS("hid:b0003g*v000017EFp00006067");
MODULE_ALIAS("hid:b0003g*v000004B3p00003100");
MODULE_ALIAS("hid:b0003g*v000004B3p00003103");
MODULE_ALIAS("hid:b0003g*v000004B3p00003105");
MODULE_ALIAS("hid:b0003g*v000004B3p00003108");
MODULE_ALIAS("hid:b0003g*v000004B3p00003109");
MODULE_ALIAS("hid:b0003g*v000017EFp00006049");

MODULE_INFO(srcversion, "7FD5DDBF4EC5A221D674E3C");
