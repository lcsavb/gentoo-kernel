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
	{ 0x2a83ff05, "sdio_writeb" },
	{ 0x9303e35d, "sdio_readb" },
	{ 0x3120ffbb, "bus_register" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x96dedfaf, "pcmcia_enable_device" },
	{ 0x77eed48e, "pcmcia_loop_tuple" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x6d60853f, "pcmcia_register_driver" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xc0cdb068, "pcmcia_read_config_byte" },
	{ 0x757c0d3a, "sdio_writesb" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8c71f7ca, "gpiochip_remove" },
	{ 0xc9334dab, "_dev_emerg" },
	{ 0xd17ba9c4, "gpiochip_add_data_with_key" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x359ecbd9, "sdio_writel" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x674fc839, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6abdbf6e, "pcmcia_write_config_byte" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcf0afa76, "sdio_readl" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x4ab8ff3c, "pcmcia_request_window" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcf0b309d, "gpiochip_get_data" },
	{ 0x1754d85f, "sdio_readsb" },
	{ 0x77989b7e, "device_create_file" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf441ac43, "ioread8_rep" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0x82d1f543, "sdio_writew" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xbeeff62e, "pcmcia_map_mem_page" },
	{ 0xedc03953, "iounmap" },
	{ 0xfa901734, "pci_prepare_to_sleep" },
	{ 0xb7915408, "pcmcia_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0xaa22bd86, "pci_back_from_sleep" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb44b2bff, "sdio_readw" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7a0d6d1f, "pcmcia_disable_device" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0x6d771be, "device_set_wakeup_enable" },
	{ 0x96474462, "sdio_release_host" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "mmc_core,pcmcia");

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014A4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004351sv*sd*bc*sc*i*");
MODULE_ALIAS("pcmcia:m02D0c0448f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02D0c0476f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "640BB6AD623034F735B26FD");
