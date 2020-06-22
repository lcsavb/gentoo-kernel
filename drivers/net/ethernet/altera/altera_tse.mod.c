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
	{ 0xf163231, "netdev_info" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc6dcbeba, "devm_ioremap_nocache" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x26eaaa97, "mdiobus_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4058c914, "phy_ethtool_get_link_ksettings" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xc6fa637d, "platform_get_irq_byname" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xcbf38353, "platform_get_resource_byname" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xd94c57bd, "phy_ethtool_set_link_ksettings" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("of:N*T*Caltr,tse-msgdma-1.0");
MODULE_ALIAS("of:N*T*Caltr,tse-msgdma-1.0C*");
MODULE_ALIAS("of:N*T*Caltr,tse-1.0");
MODULE_ALIAS("of:N*T*Caltr,tse-1.0C*");
MODULE_ALIAS("of:N*T*CALTR,tse-1.0");
MODULE_ALIAS("of:N*T*CALTR,tse-1.0C*");

MODULE_INFO(srcversion, "598DD22748A07EE8578D445");
