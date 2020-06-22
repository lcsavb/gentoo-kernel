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
	{ 0x71301392, "param_get_int" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xec0c9fde, "ipmi_smi_watcher_unregister" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xa109ed47, "ipmi_smi_watcher_register" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0xf89fe065, "param_set_int" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc5850110, "printk" },
	{ 0xf5531bea, "ipmi_poll_interface" },
	{ 0xaca90ebd, "ipmi_request_supply_msgs" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x29361773, "complete" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "4F321D529F45742A1AA22FE");
