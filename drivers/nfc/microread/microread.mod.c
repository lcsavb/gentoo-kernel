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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x48b63350, "nfc_hci_send_event" },
	{ 0x65f5151e, "nfc_dep_link_is_up" },
	{ 0xcb92b15e, "nfc_targets_found" },
	{ 0x305f3f69, "nfc_hci_set_param" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x20069143, "nfc_hci_allocate_device" },
	{ 0x406eb3f, "nfc_tm_activated" },
	{ 0xc5850110, "printk" },
	{ 0x219d4809, "nfc_hci_get_clientdata" },
	{ 0xd3efa505, "nfc_hci_send_cmd" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xb389fc81, "nfc_set_remote_general_bytes" },
	{ 0x45e2e4cd, "nfc_hci_register_device" },
	{ 0x913a3164, "nfc_get_local_general_bytes" },
	{ 0x8a4eded7, "nfc_hci_free_device" },
	{ 0xdd231c55, "nfc_hci_sak_to_protocol" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7a185559, "nfc_hci_unregister_device" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x74fe3670, "nfc_hci_result_to_errno" },
	{ 0x83f51598, "nfc_tm_data_received" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x37a0cba, "kfree" },
	{ 0x7fb9399d, "nfc_hci_send_cmd_async" },
	{ 0x634864b9, "nfc_hci_get_param" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x31fd06c3, "nfc_hci_set_clientdata" },
};

MODULE_INFO(depends, "hci,nfc,crc-ccitt");


MODULE_INFO(srcversion, "DD58250EB1099EC8324EA79");
