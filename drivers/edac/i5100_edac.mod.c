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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xcf29d39, "edac_mc_add_mc_with_groups" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x64dcc3ae, "edac_mc_alloc" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4f0af3a3, "edac_mc_handle_error" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xf65df7f8, "edac_mc_free" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x62671bad, "edac_mc_del_mc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000065F0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "55AF0929C103DE55742909E");
