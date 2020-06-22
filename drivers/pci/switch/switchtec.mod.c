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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc81cd1be, "cdev_init" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x3ea90d42, "devm_ioremap_wc" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xc1ba5402, "stream_open" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xf10de535, "ioread8" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xffb7c514, "ida_free" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c457453, "ioread64_lo_hi" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd811fa6f, "kmem_cache_alloc_node_trace" },
	{ 0x94bd2068, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0b427b1, "cdev_device_add" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd94181ab, "get_device" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x6285a072, "devm_ioremap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x33650c48, "class_destroy" },
	{ 0xc5534d64, "ioread16" },
	{ 0x58152db6, "cdev_device_del" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x3e2e6264, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011F8d00008531sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008531sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008532sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008532sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008533sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008533sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008534sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008534sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008535sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008535sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008536sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008536sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008541sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008541sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008542sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008542sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008543sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008543sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008544sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008544sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008545sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008545sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008546sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008546sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008551sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008551sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008552sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008552sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008553sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008553sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008554sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008554sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008555sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008555sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008556sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008556sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008561sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008561sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008562sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008562sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008563sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008563sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008564sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008564sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008565sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008565sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008566sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008566sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008571sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008571sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008572sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008572sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008573sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008573sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008574sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008574sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008575sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008575sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008576sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008576sv*sd*bc06sc80i00*");

MODULE_INFO(srcversion, "A8A28FE1C5F39F56F5FE6E7");
