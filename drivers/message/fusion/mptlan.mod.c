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
	{ 0x981efe92, "mpt_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x74a0134a, "mpt_device_driver_deregister" },
	{ 0x11a68ca3, "mpt_device_driver_register" },
	{ 0x815cead0, "mpt_reset_register" },
	{ 0x8e8b6525, "mpt_register" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x69acdf38, "memcpy" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x4c441a2a, "mpt_event_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb6fa083, "mpt_free_msg_frame" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6d495207, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4e34485, "alloc_fcdev" },
	{ 0xc5850110, "printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xedc94c86, "mpt_put_msg_frame" },
	{ 0xe71b661d, "mpt_get_msg_frame" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "48A454EAB80C0F2D811C2DA");
