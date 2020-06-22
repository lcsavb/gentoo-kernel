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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xa05cb8c2, "serial8250_register_8250_port" },
	{ 0x6944606e, "get_tree_single" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x7ffd7831, "generic_delete_inode" },
	{ 0xb8ae7858, "dput" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x275c0262, "d_add" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xad0cba41, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xe1e24225, "kill_litter_super" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6a683da4, "simple_open" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x72cc0d99, "simple_dir_operations" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x78f88d93, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x627bb501, "current_time" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xdabd431d, "d_make_root" },
	{ 0x21a921d0, "simple_statfs" },
	{ 0x43a51fc9, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf8eecd11, "unregister_filesystem" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2b84f737, "new_inode" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x27d18228, "simple_dir_inode_operations" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf443f897, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001014d0000010Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2C940E6D24D10F45BD038F9");
