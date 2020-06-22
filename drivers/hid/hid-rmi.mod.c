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
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0xac91dc9c, "rmi_driver_resume" },
	{ 0xa3030d4c, "hid_hw_close" },
	{ 0x6626afca, "down" },
	{ 0x7a327ad4, "rmi_register_transport_device" },
	{ 0xcf2a6966, "up" },
	{ 0x9889e67b, "hid_hw_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xb0705a63, "rmi_set_attn_data" },
	{ 0x1a281859, "pv_ops" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0xa4181659, "irq_create_mapping" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xbd7d7c01, "__irq_domain_add" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x7da8cda7, "irq_set_chip_and_handler_name" },
	{ 0xccad52af, "dummy_irq_chip" },
	{ 0x4109798, "handle_simple_irq" },
	{ 0x65b03470, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xd3053e57, "irq_find_mapping" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa264cf76, "rmi_unregister_transport_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x80171127, "hid_hw_stop" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xad0cba41, "input_event" },
	{ 0x17475388, "_dev_warn" },
	{ 0x53d4cd37, "rmi_driver_suspend" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rmi_core");

MODULE_ALIAS("hid:b0003g*v00001532p0000011D");
MODULE_ALIAS("hid:b0003g*v000017EFp00006085");
MODULE_ALIAS("hid:b0003g*v00000461p00004E72");
MODULE_ALIAS("hid:b0003g*v000006CBp000081A7");
MODULE_ALIAS("hid:b*g0100v*p*");

MODULE_INFO(srcversion, "9D372484EA60FDA3936C808");
