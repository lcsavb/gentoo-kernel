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
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x5017f298, "memstick_alloc_host" },
	{ 0x6f3f6fea, "memstick_free_host" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x8c446112, "memstick_suspend_host" },
	{ 0xc24a75f7, "memstick_detect_change" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x680ad139, "memstick_resume_host" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd926f038, "memstick_remove_host" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0x84dbf06e, "sg_miter_start" },
	{ 0xc5850110, "printk" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xf072fe37, "sg_miter_stop" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf565b5ec, "sg_miter_next" },
	{ 0xf0e0846b, "memstick_next_req" },
	{ 0x76322ba9, "memstick_add_host" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "memstick");

MODULE_ALIAS("pci:v00001180d00000592sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D5FA9E413F71E6988DB5176");
