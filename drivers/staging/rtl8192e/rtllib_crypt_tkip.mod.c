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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x990e3b3c, "lib80211_unregister_crypto_ops" },
	{ 0xc8686e75, "lib80211_register_crypto_ops" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xa417915b, "crypto_skcipher_decrypt" },
	{ 0x9923a01b, "wireless_send_event" },
	{ 0xc5850110, "printk" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0xb3ca7259, "crypto_shash_final" },
	{ 0xbc704ff, "crypto_shash_update" },
	{ 0x1f5917ce, "crypto_shash_setkey" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9c6098c5, "crypto_alloc_shash" },
	{ 0x5c279e0f, "crypto_alloc_sync_skcipher" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "9547F038C4DC9FCDE3FBA87");
