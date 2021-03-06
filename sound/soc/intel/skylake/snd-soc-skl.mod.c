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
	{ 0xa2f0b887, "snd_soc_acpi_intel_hda_machines" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x773ce046, "snd_soc_dapm_kcontrol_widget" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x21a2d082, "snd_hdac_stream_start" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0xae028bb4, "snd_hdac_dsp_cleanup" },
	{ 0x5536d154, "snd_pcm_lib_default_mmap" },
	{ 0x31cb011e, "intel_nhlt_init" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xe9c6de99, "sst_shim32_write" },
	{ 0x754d539c, "strlen" },
	{ 0x2d884435, "snd_hdac_dsp_trigger" },
	{ 0x8f1a6a3a, "snd_hdac_ext_bus_get_link" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x6571cd8, "snd_soc_tplg_widget_bind_event" },
	{ 0xeed04a85, "snd_hdac_bus_alloc_stream_pages" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0x9d3443e8, "sst_dsp_shim_write" },
	{ 0x5f3f6f3a, "snd_hdac_stream_reset" },
	{ 0xd3b8ee3, "snd_dma_alloc_pages" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x9d695531, "snd_hdac_ext_bus_link_put" },
	{ 0x75e3a396, "snd_hdac_stream_sync_trigger" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x2d071dd, "snd_hdac_get_stream" },
	{ 0xdd1dcb0d, "snd_pcm_lib_preallocate_free_for_all" },
	{ 0xcdb57027, "snd_soc_set_runtime_hwparams" },
	{ 0x72cf20d6, "snd_soc_acpi_intel_skl_machines" },
	{ 0x74e6a74, "snd_hdac_ext_link_set_stream_id" },
	{ 0xbb0690d7, "snd_hdac_ext_link_clear_stream_id" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x5ab4b65d, "snd_hdac_bus_handle_stream_irq" },
	{ 0x21fbe1f, "snd_hdac_ext_bus_get_ml_capabilities" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1fc764bd, "snd_soc_acpi_intel_cnl_machines" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x417d3ff2, "snd_hdac_stream_set_params" },
	{ 0x61f000d3, "sst_memcpy_toio_32" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x33cc4937, "sst_dsp_inbox_read" },
	{ 0x7a2f28c3, "snd_hdac_stream_setup" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0x303a19ef, "sst_dsp_outbox_write" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x292948d4, "snd_hdac_bus_parse_capabilities" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x123b60f4, "snd_hdac_acomp_exit" },
	{ 0xa4a900d, "sst_dsp_shim_update_bits" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x66decfd5, "ns_to_timespec" },
	{ 0x7a5e88cd, "snd_pcm_hw_constraint_integer" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x6b9054ac, "snd_hdac_ext_stream_set_spib" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x9efb63aa, "snd_hdac_bus_init_cmd_io" },
	{ 0x2766fa65, "snd_soc_tplg_component_remove" },
	{ 0x4fe0f5f1, "sst_ipc_tx_msg_reply_complete" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x47922998, "sst_dsp_mailbox_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x16e86983, "sst_shim32_read" },
	{ 0xdf88f748, "snd_hdac_display_power" },
	{ 0x6350b32a, "snd_pcm_sgbuf_ops_page" },
	{ 0x17475388, "_dev_warn" },
	{ 0xf8fbfb8c, "default_llseek" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9f4d544f, "snd_hdac_stream_sync" },
	{ 0x4e1201a5, "snd_hdac_bus_stop_cmd_io" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xff276c5a, "sst_dsp_shim_read" },
	{  0x956e9, "snd_soc_tplg_component_load" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x706e690b, "snd_soc_acpi_intel_glk_machines" },
	{ 0x60175432, "snd_hdac_ext_link_stream_reset" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x61faf652, "sst_ipc_init" },
	{ 0x735604dd, "intel_nhlt_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x705f8c04, "snd_hdac_ext_stream_spbcap_enable" },
	{ 0x3801776b, "__ioread32_copy" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x3557460, "sst_dsp_shim_update_bits_forced" },
	{ 0xbcdf7e2c, "sst_dsp_shim_update_bits_unlocked" },
	{ 0xbba8cdfa, "snd_soc_acpi_find_machine" },
	{ 0x5a921311, "strncmp" },
	{ 0x39c685e1, "snd_hdac_ext_stream_init_all" },
	{ 0xe402824, "snd_hdac_ext_stream_set_lpib" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0xcd7c4e0e, "snd_hdac_ext_stream_release" },
	{ 0x8d8022f5, "snd_hdac_ext_stream_assign" },
	{ 0x39a592a5, "sst_ipc_fini" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xac56f75c, "snd_hdac_bus_exit_link_reset" },
	{ 0xa63cab4c, "snd_soc_acpi_intel_bxt_machines" },
	{ 0x6a683da4, "simple_open" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0x868bcb4c, "sst_dsp_shim_read_unlocked" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xc6e94de7, "snd_hdac_ext_bus_link_power_down" },
	{ 0xc484c670, "snd_hdac_ext_stream_set_dpibr" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xaf844091, "snd_hdac_stream_cleanup" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x34bd4058, "snd_hdac_stream_stop" },
	{ 0x358a74fd, "snd_hdac_bus_init_chip" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x5145bcac, "snd_hdac_i915_init" },
	{ 0xdf053c88, "snd_hdac_stream_free_all" },
	{ 0x78db755a, "sst_ipc_tx_message_nopm" },
	{ 0xf1889d10, "snd_hdac_ext_stream_drsm_enable" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0x2cb3ce6d, "snd_hdac_ext_stream_decouple" },
	{ 0x1b069d36, "sysfs_remove_file_ns" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x27522eea, "pci_intx" },
	{ 0xcb25a262, "snd_hdac_ext_bus_exit" },
	{ 0x334a0b07, "snd_hdac_ext_bus_link_power_up_all" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1b8e381a, "snd_hdac_dsp_prepare" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xf4102c9d, "snd_hdac_bus_free_stream_pages" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a50244, "snd_dma_free_pages" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x5c81e72f, "sst_ipc_tx_message_nowait" },
	{ 0x72c851ad, "snd_hdac_ext_stop_streams" },
	{ 0x69e9049e, "snd_hdac_ext_link_stream_start" },
	{ 0xe920b5eb, "snd_hdac_stream_timecounter_init" },
	{ 0x74a28b80, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x6c9eccc1, "snd_pcm_set_sync" },
	{ 0xda089d3d, "snd_hdac_ext_bus_ppcap_int_enable" },
	{ 0x1da0b2a, "snd_hdac_ext_bus_device_remove" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd95e1d6c, "snd_hdac_ext_bus_device_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3c2340dd, "snd_hdac_link_free_all" },
	{ 0x5b264756, "snd_hdac_ext_link_stream_setup" },
	{ 0xb9f1d5ad, "snd_hdac_ext_bus_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1c6fc038, "snd_hdac_ext_bus_link_power_up" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xa2e093c9, "snd_hdac_bus_stop_chip" },
	{ 0xaa16ff73, "snd_pcm_hw_constraint_minmax" },
	{ 0xedc03953, "iounmap" },
	{ 0xf793d72e, "sst_memcpy_fromio_32" },
	{ 0x992bf688, "snd_hdac_bus_reset_link" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x9e542709, "snd_hdac_ext_link_stream_clear" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x854d6ad4, "snd_hdac_ext_bus_ppcap_enable" },
	{ 0x85c523cb, "sst_dsp_shim_write_unlocked" },
	{ 0x5ce21035, "snd_hdac_bus_update_rirb" },
	{ 0xc1e886bb, "snd_soc_dai_set_tdm_slot" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5ef5f8eb, "snd_soc_acpi_intel_kbl_machines" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfd0f3bfe, "snd_hdac_bus_get_response" },
	{ 0x4727949b, "intel_nhlt_get_dmic_geo" },
	{ 0x9137c0f6, "sst_ipc_tx_message_wait" },
	{ 0x3440da58, "snd_hdac_bus_enter_link_reset" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x274a25f4, "sysfs_create_file_ns" },
	{ 0x9b387f71, "snd_hdac_bus_send_cmd" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb343d4bc, "sst_dsp_register_poll" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xded463cd, "snd_hdac_ext_bus_link_power_down_all" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x28753ca8, "platform_device_put" },
};

MODULE_INFO(depends, "snd-soc-acpi-intel-match,snd-pcm,snd-soc-core,snd-hda-core,snd-intel-nhlt,snd-soc-sst-dsp,snd-hda-ext-core,snd-soc-sst-ipc,snd-soc-acpi");

MODULE_ALIAS("pci:v00008086d00009D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003198sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A348sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006C8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "11F62AAE4503D0CCE278CB4");
