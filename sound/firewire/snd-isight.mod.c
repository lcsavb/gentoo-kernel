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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xbe472234, "fw_iso_resources_update" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x3e7d281d, "iso_packets_buffer_init" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xa533042d, "fw_iso_resources_init" },
	{ 0x63900e92, "snd_pcm_stop_xrun" },
	{ 0x353d3abf, "fw_bus_type" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x285da2e0, "snd_card_disconnect" },
	{ 0x83185323, "fw_iso_context_start" },
	{ 0x317d5c0, "fw_iso_context_queue_flush" },
	{ 0xfb578fc5, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x7f10960c, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xc3f8c1e3, "iso_packets_buffer_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x4e921506, "fw_iso_resources_destroy" },
	{ 0x7d9ac42d, "fw_iso_context_queue" },
	{ 0x94bd2068, "put_device" },
	{ 0x5541c382, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf1294315, "fw_iso_resources_allocate" },
	{ 0xd94181ab, "get_device" },
	{ 0xa2eb1cf5, "fw_iso_context_stop" },
	{ 0x3d91377d, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0x5e59a1c6, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0xc2906c44, "snd_fw_transaction" },
	{ 0x6693e048, "fw_iso_resources_free" },
	{ 0x9c7c8612, "fw_iso_context_destroy" },
};

MODULE_INFO(depends, "firewire-core,snd-firewire-lib,snd-pcm,snd");

MODULE_ALIAS("ieee1394:ven*mo*sp00000A27ver00000010*");

MODULE_INFO(srcversion, "4684208F7E1898B13612A76");
