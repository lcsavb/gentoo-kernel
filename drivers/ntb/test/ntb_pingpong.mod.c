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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x14e3066b, "ntb_unregister_client" },
	{ 0x1d624694, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x199482c0, "ntb_default_port_number" },
	{ 0x3a9c99c7, "ntb_default_peer_port_count" },
	{ 0x9f36e7a8, "debugfs_create_atomic_t" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x250382fa, "ntb_link_event" },
	{ 0x9b4f6be5, "ntb_set_ctx" },
	{ 0x3d60fc11, "ntb_default_peer_port_number" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x89112ad2, "ntb_clear_ctx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "59B5B988BD51F18DF7221BD");
