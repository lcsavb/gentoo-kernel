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
	{ 0x70fe8319, "sof_io_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7a28f60c, "intel_ipc_pcm_params" },
	{ 0x7583e57b, "snd_sof_load_firmware_memcpy" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xd92d7af3, "snd_sof_dsp_panic" },
	{ 0x85109e79, "snd_sof_ipc_reply" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x53afb8d6, "sof_io_read" },
	{ 0x7895196f, "intel_pcm_close" },
	{ 0x48877057, "intel_pcm_open" },
	{ 0x4d2bd007, "sof_fw_ready" },
	{ 0x17475388, "_dev_warn" },
	{ 0xe89e4f05, "snd_sof_ipc_msgs_rx" },
	{ 0x67678679, "intel_ipc_msg_data" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x842ed078, "sof_mailbox_read" },
	{ 0xf324b64b, "sof_mailbox_write" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x283b3d97, "sof_io_read64" },
	{ 0xd816c538, "snd_sof_get_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7961f0df, "sof_block_write" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa281e170, "snd_sof_parse_module_memcpy" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xeba75086, "snd_sof_dsp_update_bits64_unlocked" },
	{ 0x6285a072, "devm_ioremap" },
	{ 0x33af63c3, "snd_sof_dsp_update_bits64" },
	{ 0x4e07345e, "sof_io_write64" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x4241a61d, "sof_block_read" },
};

MODULE_INFO(depends, "snd-sof,snd-sof-intel-ipc");


MODULE_INFO(srcversion, "119D8E89B802F57E8D43112");
