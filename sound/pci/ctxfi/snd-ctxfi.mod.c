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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xd3b8ee3, "snd_dma_alloc_pages" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a5e88cd, "snd_pcm_hw_constraint_integer" },
	{ 0x1a281859, "pv_ops" },
	{ 0x285da2e0, "snd_card_disconnect" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x6350b32a, "snd_pcm_sgbuf_ops_page" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0x919ee3b8, "snd_ctl_notify" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7e3191f6, "try_to_del_timer_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5de909dc, "_dev_alert" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4e1b99f, "snd_pcm_std_chmaps" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0x73076315, "snd_pci_quirk_lookup_id" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a50244, "snd_dma_free_pages" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xaa16ff73, "snd_pcm_hw_constraint_minmax" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x53ea696c, "snd_pcm_add_chmap_ctls" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd");

MODULE_ALIAS("pci:v00001102d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d0000000Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BBB54508BA3FCF7F37F64E2");
