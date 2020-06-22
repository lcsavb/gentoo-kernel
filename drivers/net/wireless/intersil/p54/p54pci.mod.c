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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x85df445e, "p54_register_common" },
	{ 0x986fd961, "p54_read_eeprom" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1e1be212, "device_release_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x284c17b2, "p54_parse_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0xb44db06c, "p54_rx" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xece8e5ff, "p54_free_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeefacf3d, "p54_init_common" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x6034484a, "pci_try_set_mwi" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xd6f026d2, "pci_dev_get" },
	{ 0x29361773, "complete" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdbbd60fd, "p54_free_common" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xc34b0673, "p54_unregister_common" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x86118ef8, "pci_reenable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "p54common");

MODULE_ALIAS("pci:v00001260d00003890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d0000FFFFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4ED4A9797DE563D4440D968");
