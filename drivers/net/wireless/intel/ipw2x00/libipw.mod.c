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
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x631a8ac6, "wiphy_free" },
	{ 0x7ed6fcc6, "lib80211_crypt_delayed_deinit" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x9fa43e2a, "lib80211_crypt_info_free" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x6ab0d8d7, "wireless_spy_update" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x59d5b339, "lib80211_get_crypto_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab89ce2d, "lib80211_crypt_info_init" },
	{ 0xa70ae6c5, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211,lib80211");


MODULE_INFO(srcversion, "FF99C1573B09E9EF3A250BA");
