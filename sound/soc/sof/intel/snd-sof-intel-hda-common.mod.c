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
	{ 0xa2f0b887, "snd_soc_acpi_intel_hda_machines" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa7390427, "snd_sof_pcm_period_elapsed" },
	{ 0x70fe8319, "sof_io_write" },
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0xe76c87c7, "hda_codec_i915_init" },
	{ 0x31cb011e, "intel_nhlt_init" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x8f1a6a3a, "snd_hdac_ext_bus_get_link" },
	{ 0xd3b8ee3, "snd_dma_alloc_pages" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x9d695531, "snd_hdac_ext_bus_link_put" },
	{ 0xd92d7af3, "snd_sof_dsp_panic" },
	{ 0x74e6a74, "snd_hdac_ext_link_set_stream_id" },
	{ 0x97048b32, "snd_sof_load_firmware_raw" },
	{ 0xbb0690d7, "snd_hdac_ext_link_clear_stream_id" },
	{ 0xcfdc5f98, "sof_ipc_tx_message" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x21fbe1f, "snd_hdac_ext_bus_get_ml_capabilities" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x85df9b6c, "strsep" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x85109e79, "snd_sof_ipc_reply" },
	{ 0x1a281859, "pv_ops" },
	{ 0x13317307, "devm_kasprintf" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x53afb8d6, "sof_io_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9efb63aa, "snd_hdac_bus_init_cmd_io" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x4d2bd007, "sof_fw_ready" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x17475388, "_dev_warn" },
	{ 0x2ee4edb3, "snd_sof_pci_update_bits" },
	{ 0x2c788324, "snd_sof_dsp_update_bits" },
	{ 0x4e1201a5, "snd_hdac_bus_stop_cmd_io" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa9167255, "snd_sof_dsp_update_bits_unlocked" },
	{ 0x60175432, "snd_hdac_ext_link_stream_reset" },
	{ 0x735604dd, "intel_nhlt_free" },
	{ 0xe117577e, "snd_soc_dpcm_get_substream" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe89e4f05, "snd_sof_ipc_msgs_rx" },
	{ 0xcd7c4e0e, "snd_hdac_ext_stream_release" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f93b6f, "snd_sof_dsp_update_bits_forced" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0x842ed078, "sof_mailbox_read" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc6e94de7, "snd_hdac_ext_bus_link_power_down" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xf324b64b, "sof_mailbox_write" },
	{ 0x1a2c12ce, "hda_codec_i915_put" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x283b3d97, "sof_io_read64" },
	{ 0xd816c538, "snd_sof_get_status" },
	{ 0x2cb3ce6d, "snd_hdac_ext_stream_decouple" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7961f0df, "sof_block_write" },
	{ 0xcb25a262, "snd_hdac_ext_bus_exit" },
	{ 0xa886fd0, "devm_kstrdup" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a50244, "snd_dma_free_pages" },
	{ 0x607bb327, "hda_codec_i915_exit" },
	{ 0x69e9049e, "snd_hdac_ext_link_stream_start" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf9b6495b, "snd_soc_hdac_hda_get_ops" },
	{ 0x1da0b2a, "snd_hdac_ext_bus_device_remove" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x75870b9a, "snd_sgbuf_get_chunk_size" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3c2340dd, "snd_hdac_link_free_all" },
	{ 0x5b264756, "snd_hdac_ext_link_stream_setup" },
	{ 0xb9f1d5ad, "snd_hdac_ext_bus_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb94bbd3f, "hda_codec_jack_wake_enable" },
	{ 0xedc03953, "iounmap" },
	{ 0x4e07345e, "sof_io_write64" },
	{ 0x95793844, "hda_codec_probe_bus" },
	{ 0x9e542709, "snd_hdac_ext_link_stream_clear" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5ce21035, "snd_hdac_bus_update_rirb" },
	{ 0xc1e886bb, "snd_soc_dai_set_tdm_slot" },
	{ 0x4727949b, "intel_nhlt_get_dmic_geo" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xded463cd, "snd_hdac_ext_bus_link_power_down_all" },
	{ 0x4241a61d, "sof_block_read" },
	{ 0x10803a3e, "hda_codec_jack_check" },
};

MODULE_INFO(depends, "snd-soc-acpi-intel-match,snd-pcm,snd-sof,snd-sof-intel-hda,snd-intel-nhlt,snd-hda-ext-core,snd-hda-core,snd-soc-core,snd-soc-hdac-hda");


MODULE_INFO(srcversion, "B09BEAB4B4F949638C0ADE9");
