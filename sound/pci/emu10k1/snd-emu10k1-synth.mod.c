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
	{ 0x7853bb5e, "snd_emux_new" },
	{ 0x1fa6b737, "snd_emu10k1_synth_alloc" },
	{ 0x2db68fdd, "snd_emux_register" },
	{ 0x6a19a38e, "snd_emu10k1_memblk_map" },
	{ 0xbaff58a0, "snd_emu10k1_voice_alloc" },
	{ 0x68d5a229, "__snd_seq_driver_register" },
	{ 0xe9f7ede9, "snd_emu10k1_synth_bzero" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe6d63d74, "snd_emux_free" },
	{ 0xdc52c270, "snd_emu10k1_ptr_write" },
	{ 0x1cc1f4f4, "snd_emu10k1_synth_free" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x843ee3e, "snd_emu10k1_voice_free" },
	{ 0xaa8a9d93, "snd_emu10k1_synth_copy_from_user" },
	{ 0xc8f13aea, "snd_emu10k1_ptr_read" },
	{ 0x76dadd73, "snd_seq_driver_unregister" },
};

MODULE_INFO(depends, "snd-emux-synth,snd-emu10k1,snd-seq-device");


MODULE_INFO(srcversion, "B9A37584DA2A60C8E54AFEE");
