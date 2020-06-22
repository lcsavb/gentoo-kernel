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
	{ 0x4174c002, "param_ops_ulong" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc10a5a8d, "class_interface_unregister" },
	{ 0xd64e37c3, "class_interface_register" },
	{ 0x7ee73da2, "switchtec_class" },
	{ 0xbcbc5a17, "pci_iomap_range" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xe1d3412a, "ntb_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xfb578fc5, "memset" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xc5534d64, "ioread16" },
	{ 0xd811fa6f, "kmem_cache_alloc_node_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x250382fa, "ntb_link_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf10de535, "ioread8" },
	{ 0x1c662315, "ntb_db_event" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x848d372e, "iowrite8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd21c5139, "iowrite64_lo_hi" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3c457453, "ioread64_lo_hi" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa7b883c4, "ntb_unregister_device" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "switchtec,ntb");


MODULE_INFO(srcversion, "D763E46C4D5F87944B2EC3D");
