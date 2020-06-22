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
	{ 0xef8673a4, "nf_ct_unexpect_related" },
	{ 0x36eb11d4, "nf_conntrack_helper_register" },
	{ 0xa1ca99b3, "nf_ct_gre_keymap_add" },
	{ 0x91f2dd39, "nf_conntrack_helper_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeeb68c17, "nf_ct_expect_init" },
	{ 0x816a881a, "nf_ct_delete" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x3170ece5, "nf_ct_expect_find_get" },
	{ 0xa4156720, "nf_ct_expect_put" },
	{ 0xb9c38f17, "nf_ct_expect_alloc" },
	{ 0x4d5a6fdf, "nf_ct_expect_related_report" },
	{ 0x386378bc, "nf_ct_gre_keymap_destroy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x6c273993, "nf_conntrack_find_get" },
	{ 0x99a9f2aa, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "85E714C3FDAA8F09FA1D3A9");
