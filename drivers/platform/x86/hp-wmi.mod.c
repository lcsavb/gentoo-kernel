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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xa571ade0, "__platform_driver_probe" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x81c5a4ff, "sparse_keymap_setup" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x557762e2, "sparse_keymap_report_event" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xad0cba41, "input_event" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0x56470118, "__warn_printk" },
	{ 0xff282521, "rfkill_register" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x57ffee52, "rfkill_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb578fc5, "memset" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
};

MODULE_INFO(depends, "wmi,sparse-keymap,rfkill");


MODULE_INFO(srcversion, "3D017C7408297A02718088B");
