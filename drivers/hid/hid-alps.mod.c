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
	{ 0xd9a25476, "input_mt_sync_frame" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xad0cba41, "input_event" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9dba1d92, "input_alloc_absinfo" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x6626afca, "down" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xcf2a6966, "up" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x80171127, "hid_hw_stop" },
	{ 0xa3030d4c, "hid_hw_close" },
	{ 0x9889e67b, "hid_hw_open" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b*g*v0000044Ep0000120B");
MODULE_ALIAS("hid:b*g*v0000044Ep00001215");
MODULE_ALIAS("hid:b*g*v0000044Ep0000120C");

MODULE_INFO(srcversion, "5CBD93209DF1E785173AB08");
