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
	{ 0x127d8363, "rtl_cam_delete_one_entry" },
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0x1558325c, "rtl_fw_cb" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x88b9bfa4, "rtl_pci_probe" },
	{ 0x97279693, "rtl_cam_get_free_entry" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x9e9fdf28, "rtl_dm_diginit" },
	{ 0xcb36f5b5, "rtl_ps_disable_nic" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdc7f3c77, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x2c97332c, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd008ff4e, "rtl_phy_scan_operation_backup" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xe1ed213, "rtl_pci_resume" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xc97a11ab, "rtl_ps_enable_nic" },
	{ 0x928fb437, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2921a4d4, "rtl_btc_status_false" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x6e9f01fd, "rtl_fw_page_write" },
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0x38aee633, "rtl_pci_suspend" },
	{ 0xe38f6cb, "rtlwifi_rate_mapping" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x54eaa314, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x1f99adee, "rtl_rfreg_delay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x41b53f9b, "rtl_cam_mark_invalid" },
	{ 0x54824f58, "channel5g" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xea1c668e, "rtl_cam_del_entry" },
	{ 0x74e91674, "rtl_cam_empty_entry" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xc2d63dec, "rtl_cam_reset_all_entry" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x48d62551, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci");

MODULE_ALIAS("pci:v000010ECd00008193sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000002Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2EFC8F78F866BF96FB75323");
