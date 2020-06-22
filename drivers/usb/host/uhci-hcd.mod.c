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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xf2e98682, "usb_hcd_pci_pm_ops" },
	{ 0xece83274, "usb_hcd_pci_remove" },
	{ 0xba118c8a, "usb_hcd_pci_probe" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x7daaf29f, "usb_debug_root" },
	{ 0xc17515d7, "usb_hcds_loaded" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x53077ab0, "usb_hcd_resume_root_hub" },
	{ 0x8dd80ad2, "dma_pool_create" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd63b92d9, "usb_root_hub_lost_power" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0xb59ac279, "usb_hcd_link_urb_to_ep" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3643f305, "usb_hc_died" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x55c1c12, "usb_hcd_poll_rh_status" },
	{ 0xfa8ee75, "usb_hcd_check_unlink_urb" },
	{ 0x17475388, "_dev_warn" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x55573667, "usb_hcd_giveback_urb" },
	{ 0x1a281859, "pv_ops" },
	{ 0x98631b8a, "usb_hcd_unlink_urb_from_ep" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcec7d039, "usb_hcd_start_port_resume" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x648dc21e, "usb_hcd_end_port_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x94fb2baf, "device_set_wakeup_capable" },
	{ 0x5d030f1, "uhci_reset_hc" },
	{ 0x71c9a77d, "uhci_check_and_reset_hc" },
	{ 0x91ecf1fd, "no_seek_end_llseek_size" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x37a0cba, "kfree" },
	{ 0x349cba85, "strchr" },
	{ 0xc5850110, "printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i00*");

MODULE_INFO(srcversion, "85B661C00E9C1F7D3DCD2EE");
