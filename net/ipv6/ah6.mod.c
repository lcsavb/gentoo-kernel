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
	{ 0x5698028f, "xfrm6_find_1stfragopt" },
	{ 0x75c24d01, "xfrm6_rcv" },
	{ 0x2b3ab9b2, "xfrm6_protocol_deregister" },
	{ 0xa1043791, "xfrm_unregister_type" },
	{ 0x66578b1f, "xfrm6_protocol_register" },
	{ 0x67e82f07, "xfrm_register_type" },
	{ 0x9ddf41e5, "xfrm_input_resume" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x75d0e3de, "crypto_ahash_digest" },
	{ 0x821ef363, "skb_to_sgvec_nomark" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x44244ffc, "skb_cow_data" },
	{ 0xf70e9c32, "ip6_redirect" },
	{ 0xa8c9ba17, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc07ee139, "ip6_update_pmtu" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x30a98961, "xfrm_state_lookup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x95a91cde, "crypto_ahash_setkey" },
	{ 0xd24a6d19, "crypto_alloc_ahash" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0xa94f4a69, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "D80D1208B8E6DF0D9D97D77");
