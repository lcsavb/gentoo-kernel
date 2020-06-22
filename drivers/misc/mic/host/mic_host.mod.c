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
	{ 0xa24f23d8, "__request_module" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x40120314, "single_open" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xda584c89, "single_release" },
	{ 0xd517f601, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xda06fac, "pci_disable_msix" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xae254cfe, "seq_read" },
	{ 0x1a281859, "pv_ops" },
	{ 0xd33c5b3, "vop_unregister_device" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfd5a9f42, "scif_register_device" },
	{ 0xffb7c514, "ida_free" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7ae5b6d2, "mbus_register_device" },
	{ 0x13459b59, "cosm_unregister_device" },
	{ 0x2c3b785d, "cosm_register_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xca155594, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x27522eea, "pci_intx" },
	{ 0xfcad9e14, "mbus_unregister_device" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x9315f481, "vop_register_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcb10622b, "__dma_request_channel" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0xb44c9324, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xc7a57ce4, "scif_unregister_device" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "vop_bus,scif_bus,mic_bus,cosm_bus");

MODULE_ALIAS("pci:v00008086d00002250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002251sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002252sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002253sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002254sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002255sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002256sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002257sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002258sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002259sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000225Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000225Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000225Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000225Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000225Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EC92BF1069C000C35CE234C");
