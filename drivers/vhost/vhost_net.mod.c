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
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x5febf179, "vhost_vq_avail_empty" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x6da1c78e, "sockfd_lookup" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xcec1d70d, "vhost_dev_check_owner" },
	{ 0x30c59fc, "vq_meta_prefetch" },
	{ 0xfddfa351, "vhost_poll_start" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7076e269, "vhost_chr_poll" },
	{ 0xa6841fb6, "tun_ptr_to_xdp" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa90fbd85, "vhost_dev_cleanup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x84c7891c, "vhost_log_access_ok" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc3af93c0, "__page_frag_cache_drain" },
	{ 0x1a281859, "pv_ops" },
	{ 0x757a6f07, "copy_page_from_iter" },
	{ 0x6689dc84, "vhost_enable_notify" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc88a617, "vhost_dev_has_owner" },
	{ 0xc1a1c0a4, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xecc0da4a, "vhost_disable_notify" },
	{ 0x2e76b019, "misc_register" },
	{ 0xb96898ae, "vhost_dev_ioctl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfac30a96, "vhost_log_write" },
	{ 0x9c053884, "vhost_chr_read_iter" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x85b6424b, "vhost_get_vq_desc" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0xb55573fa, "vhost_chr_write_iter" },
	{ 0xce71e12c, "vhost_dev_set_owner" },
	{ 0x35f9daf7, "vhost_add_used_and_signal_n" },
	{ 0x4b54fc7f, "vhost_dev_reset_owner_prepare" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7419e1ca, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2640096f, "vhost_add_used_and_signal" },
	{ 0x6afc2b73, "vhost_discard_vq_desc" },
	{ 0xa520f103, "tun_get_socket" },
	{ 0x492eac3, "vhost_poll_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4387e89c, "vhost_exceeds_weight" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x19969cac, "tun_get_tx_ring" },
	{ 0xe6a7f617, "vhost_poll_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb62d8f3, "vhost_vq_init_access" },
	{ 0x499664a, "vhost_poll_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf31ec237, "iov_iter_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8cf13a9, "vhost_dev_reset_owner" },
	{ 0xd8602b6a, "tun_is_xdp_frame" },
	{ 0xf9d90dd4, "vhost_has_work" },
	{ 0x5862c313, "vhost_dev_init" },
	{ 0x8edd97ea, "fget" },
	{ 0xb2b2c4c4, "iov_iter_advance" },
	{ 0x709bf344, "tap_get_socket" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfbbe6ca7, "vhost_dev_stop" },
	{ 0x844de37a, "vhost_vq_access_ok" },
	{ 0x4099f919, "tun_ptr_free" },
	{ 0xbad9c142, "tap_get_ptr_ring" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x66eeb362, "vhost_vring_ioctl" },
	{ 0x867234, "misc_deregister" },
	{ 0x6fb8948f, "_copy_to_iter" },
	{ 0x600eb4ae, "vhost_init_device_iotlb" },
	{ 0xceb66bec, "sched_clock_cpu" },
};

MODULE_INFO(depends, "vhost,tun,tap");


MODULE_INFO(srcversion, "4B35398A69CC3275397D037");
