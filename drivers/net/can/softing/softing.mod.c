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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe10cfc9a, "register_candev" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x1a281859, "pv_ops" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xfd6a5629, "netdev_alert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d6ff7db, "can_bus_off" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x17475388, "_dev_warn" },
	{ 0x9ee11a36, "close_candev" },
	{ 0xf10de535, "ioread8" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x712e52f7, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc9938aa0, "dev_close" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0xcba9b854, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6f8688b6, "free_candev" },
	{ 0x5de909dc, "_dev_alert" },
	{ 0xfa94756d, "can_change_mtu" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc0154297, "unregister_candev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa8b73cba, "alloc_can_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf65ccabd, "open_candev" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3123d94f, "can_get_echo_skb" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xf0fb1a95, "can_put_echo_skb" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "0617CB7F40C4BADDF5709E7");
