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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd63b92d9, "usb_root_hub_lost_power" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7daaf29f, "usb_debug_root" },
	{ 0x55c1c12, "usb_hcd_poll_rh_status" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x55573667, "usb_hcd_giveback_urb" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xb9b9df41, "usb_amd_dev_put" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x10ecc52c, "usb_amd_quirk_pll_enable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x17475388, "_dev_warn" },
	{ 0xb59ac279, "usb_hcd_link_urb_to_ep" },
	{ 0xf8fbfb8c, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3d210724, "gen_pool_dma_zalloc_align" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdc825d6c, "usb_amd_quirk_pll_disable" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc17515d7, "usb_hcds_loaded" },
	{ 0xfa8ee75, "usb_hcd_check_unlink_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x91fae699, "sb800_prefetch" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xada31e57, "gen_pool_dma_alloc_align" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3643f305, "usb_hc_died" },
	{ 0x98631b8a, "usb_hcd_unlink_urb_from_ep" },
	{ 0x53077ab0, "usb_hcd_resume_root_hub" },
	{ 0x8dd80ad2, "dma_pool_create" },
	{ 0x94fb2baf, "device_set_wakeup_capable" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0871CEC7DD852E59482CDE5");
