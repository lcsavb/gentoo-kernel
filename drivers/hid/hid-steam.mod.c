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
	{ 0xbbb77c5e, "param_get_bool" },
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0x9889e67b, "hid_hw_open" },
	{ 0x1c4d2d7d, "hid_add_device" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf8278c, "hid_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0xbda06afa, "power_supply_powers" },
	{ 0x182b9d7, "power_supply_register" },
	{ 0x13317307, "devm_kasprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x754d539c, "strlen" },
	{ 0x80171127, "hid_hw_stop" },
	{ 0xa3030d4c, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7903c8ae, "hid_destroy_device" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xdd65ca27, "power_supply_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x195b708e, "power_supply_changed" },
	{ 0xad0cba41, "input_event" },
	{ 0xffb8ad78, "hid_input_report" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x42d461f9, "param_set_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcb7ae1c8, "hid_alloc_report_buf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe0503b42, "power_supply_get_drvdata" },
	{ 0xc5850110, "printk" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x9dba1d92, "input_alloc_absinfo" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x5495392, "hid_debug" },
	{ 0xcf414d3c, "hid_parse_report" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");

MODULE_INFO(srcversion, "5F8297759E59AE9D78FA8EE");
