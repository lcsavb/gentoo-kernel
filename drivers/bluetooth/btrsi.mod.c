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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x511f9fcc, "hci_register_dev" },
	{ 0x190b4cc, "hci_recv_frame" },
	{ 0x8b2db4, "hci_unregister_dev" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x73421355, "hci_alloc_dev" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0e602eb, "memmove" },
	{ 0x26054bdc, "hci_free_dev" },
	{ 0xffea6bc9, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "7F6D30AB7271586419B7871");
