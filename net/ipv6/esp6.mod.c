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
	{ 0x66578b1f, "xfrm6_protocol_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x3e72f0da, "skb_to_sgvec" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x865a79f2, "xfrm_dev_resume" },
	{ 0xa1043791, "xfrm_unregister_type" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbe4a340e, "pskb_put" },
	{ 0xb7dd5902, "skb_page_frag_refill" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x44244ffc, "skb_cow_data" },
	{ 0xf70e9c32, "ip6_redirect" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x9ddf41e5, "xfrm_input_resume" },
	{ 0xfb578fc5, "memset" },
	{ 0xb4d239d, "skb_checksum" },
	{ 0x712e52f7, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x60d16ebb, "crypto_aead_encrypt" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xc0e32629, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x67e82f07, "xfrm_register_type" },
	{ 0xab3b7647, "xfrm_state_mtu" },
	{ 0x5698028f, "xfrm6_find_1stfragopt" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0xa94f4a69, "xfrm_output_resume" },
	{ 0xc07ee139, "ip6_update_pmtu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x48e524e, "skb_pull_rcsum" },
	{ 0xa8c9ba17, "__xfrm_state_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2e50cbd2, "crypto_aead_decrypt" },
	{ 0x77c44121, "crypto_aead_setauthsize" },
	{ 0xc8414918, "crypto_alloc_aead" },
	{ 0x30a98961, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf60d427, "___pskb_trim" },
	{ 0x3d29dae0, "__skb_ext_del" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x75c24d01, "xfrm6_rcv" },
	{ 0xe48af658, "__put_page" },
	{ 0x2b3ab9b2, "xfrm6_protocol_deregister" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "8A2D046861DAEAA77C39D35");
