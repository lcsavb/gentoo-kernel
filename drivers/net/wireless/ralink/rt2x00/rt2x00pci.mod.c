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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x39a0d6a9, "rt2x00lib_resume" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0xf115de16, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6dd96a89, "pci_set_mwi" },
	{ 0xcac452ab, "rt2x00lib_remove_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x8aefcfd8, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xbdfe01c5, "rt2x00lib_probe_dev" },
	{ 0x1c081303, "rt2x00lib_suspend" },
	{ 0x20a69ede, "pci_save_state" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "C0CFF0F20CF7B9E0650CCCB");
