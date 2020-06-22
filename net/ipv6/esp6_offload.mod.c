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
	{ 0xf6d4bc5f, "inet6_del_offload" },
	{ 0x1b304a0f, "xfrm_unregister_type_offload" },
	{ 0xc5850110, "printk" },
	{ 0x2f094dbc, "inet6_add_offload" },
	{ 0xe1c939ce, "xfrm_register_type_offload" },
	{ 0xa8c9ba17, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7eba69c1, "xfrm_input" },
	{ 0x30a98961, "xfrm_state_lookup" },
	{ 0xe8c90b02, "secpath_set" },
	{ 0xf2fe52d7, "xfrm_parse_spi" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3d29dae0, "__skb_ext_del" },
	{ 0xeb6d9d22, "esp6_output_tail" },
	{ 0x1180e2d4, "esp6_output_head" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x835831cb, "inet6_offloads" },
	{ 0xfd671419, "skb_mac_gso_segment" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x9d722beb, "esp6_input_done2" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "esp6");


MODULE_INFO(srcversion, "F39CC10ECF8E654CB00E4C9");
