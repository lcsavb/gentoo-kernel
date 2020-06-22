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
	{ 0xd63b92d9, "usb_root_hub_lost_power" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x60d6e001, "usb_add_hcd" },
	{ 0x40120314, "single_open" },
	{ 0xbbe4d611, "usb_remove_hcd" },
	{ 0x7daaf29f, "usb_debug_root" },
	{ 0xda584c89, "single_release" },
	{ 0x470ea21, "usb_create_hcd" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x55573667, "usb_hcd_giveback_urb" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0xae254cfe, "seq_read" },
	{ 0x1a281859, "pv_ops" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb5fdaf62, "usb_put_hcd" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x17475388, "_dev_warn" },
	{ 0xb59ac279, "usb_hcd_link_urb_to_ep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x989d039e, "device_wakeup_enable" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfa8ee75, "usb_hcd_check_unlink_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x98631b8a, "usb_hcd_unlink_urb_from_ep" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C44319272719F741213DF56");
