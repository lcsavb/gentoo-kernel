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
	{ 0x946cfd49, "param_ops_int" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3bfd6888, "put_disk" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x858bbf12, "blk_queue_split" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xdfac1770, "bio_endio" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x296ef733, "blk_queue_make_request" },
	{ 0x58eff1c6, "blk_alloc_queue_node" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001332d00005415sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001332d00005425sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001332d00006155sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000B555sv00001332sd00005460bc*sc*i*");

MODULE_INFO(srcversion, "B2450F96B3B76ACAC175DB0");
