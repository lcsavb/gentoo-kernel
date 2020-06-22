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
	{ 0xccfbeafd, "driver_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xde3ee7db, "snd_hdac_device_exit" },
	{ 0x1a281859, "pv_ops" },
	{ 0xb290aff2, "snd_hda_bus_type" },
	{ 0x9efb63aa, "snd_hdac_bus_init_cmd_io" },
	{ 0x4e1201a5, "snd_hdac_bus_stop_cmd_io" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2c2917bb, "snd_hdac_stream_assign" },
	{ 0xf28afc12, "snd_hdac_device_init" },
	{ 0x265b1d4d, "snd_hdac_device_unregister" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xbb373c88, "snd_hdac_stream_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x567b34fe, "snd_hdac_bus_init" },
	{ 0x34bd4058, "snd_hdac_stream_stop" },
	{ 0x5971cc6b, "snd_hdac_device_register" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x64f7e54f, "snd_hdac_bus_exit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xa2e093c9, "snd_hdac_bus_stop_chip" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x797f6a0, "snd_hdac_stream_release" },
};

MODULE_INFO(depends, "snd-hda-core");


MODULE_INFO(srcversion, "5D5130CACA0B7C5BAED42A7");
