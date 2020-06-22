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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc1723656, "cxgb4_ring_tx_db" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x9c6098c5, "crypto_alloc_shash" },
	{ 0x162234e3, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2adc4978, "cxgb4_reclaim_completed_tx" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x676a11a9, "cxgb4_unregister_uld" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x5c279e0f, "crypto_alloc_sync_skcipher" },
	{ 0xae2e6dab, "netdev_change_features" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfb578fc5, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x306d7628, "cxgb4_write_sgl" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xbc704ff, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaa14636c, "crypto_shash_digest" },
	{ 0x6edaea66, "crypto_register_ahash" },
	{ 0x500f546f, "cxgb4_crypto_send" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x60d16ebb, "crypto_aead_encrypt" },
	{ 0x5e21dff6, "cxgb4_inline_tx_skb" },
	{ 0xd8241c8a, "cxgb4_map_skb" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc0e32629, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x681e3cee, "module_put" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xa417915b, "crypto_skcipher_decrypt" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x789db693, "crypto_unregister_ahash" },
	{ 0xad509e90, "crypto_register_alg" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x91e7b9bc, "cxgb4_register_uld" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x78a16f48, "aes_decrypt" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2e50cbd2, "crypto_aead_decrypt" },
	{ 0x77c44121, "crypto_aead_setauthsize" },
	{ 0xc8414918, "crypto_alloc_aead" },
	{ 0x7a1bcd59, "gf128mul_x8_ble" },
	{ 0x37a0cba, "kfree" },
	{ 0x58af7efd, "crypto_unregister_aead" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0x2ab986f0, "crypto_register_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0x29361773, "complete" },
	{ 0xba27221e, "crypto_unregister_alg" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cxgb4,authenc");


MODULE_INFO(srcversion, "8C6F3D8EFB50683E27E54D2");
