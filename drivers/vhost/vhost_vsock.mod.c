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
	{ 0x47fcb805, "virtio_transport_recv_pkt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1a04ba66, "virtio_transport_set_buffer_size" },
	{ 0xdb2c8890, "virtio_transport_destruct" },
	{ 0x12d1438e, "vhost_work_flush" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xcec1d70d, "vhost_dev_check_owner" },
	{ 0x1eaac7e0, "virtio_transport_get_max_buffer_size" },
	{ 0xc3e32dba, "virtio_transport_notify_send_pre_block" },
	{ 0x89cfa46f, "virtio_transport_stream_has_space" },
	{ 0xf2476a31, "_copy_from_iter" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x332c6d79, "virtio_transport_notify_poll_in" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc259ddb6, "virtio_transport_do_socket_init" },
	{ 0xf5b24598, "virtio_transport_stream_is_active" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbdc69bb6, "__vsock_core_init" },
	{ 0xa90fbd85, "vhost_dev_cleanup" },
	{ 0x84c7891c, "vhost_log_access_ok" },
	{ 0x2dcf2961, "virtio_transport_deliver_tap_pkt" },
	{ 0xa209ea38, "virtio_transport_set_min_buffer_size" },
	{ 0x6689dc84, "vhost_enable_notify" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x293b1bc1, "virtio_transport_notify_recv_post_dequeue" },
	{ 0xeaf603ff, "virtio_transport_notify_poll_out" },
	{ 0xc1a1c0a4, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xecc0da4a, "vhost_disable_notify" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x2e76b019, "misc_register" },
	{ 0xc2a9dd32, "vhost_signal" },
	{ 0xb96898ae, "vhost_dev_ioctl" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x290d351e, "virtio_transport_stream_dequeue" },
	{ 0xab50e023, "virtio_transport_stream_enqueue" },
	{ 0xf21ba8e3, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x85b6424b, "vhost_get_vq_desc" },
	{ 0xfc663271, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0x337a617b, "vhost_work_queue" },
	{ 0x5a38b510, "virtio_transport_notify_send_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x502e375a, "virtio_transport_get_buffer_size" },
	{ 0x492eac3, "vhost_poll_queue" },
	{ 0x7404d1ed, "virtio_transport_dgram_dequeue" },
	{ 0x62ab812a, "virtio_transport_notify_send_post_enqueue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4387e89c, "vhost_exceeds_weight" },
	{ 0xa7952d10, "virtio_transport_shutdown" },
	{ 0x710e88c7, "virtio_transport_dgram_enqueue" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb62d8f3, "vhost_vq_init_access" },
	{ 0x81e4d0e5, "virtio_transport_notify_recv_pre_block" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x8905132c, "virtio_transport_free_pkt" },
	{ 0xfae1e6d7, "virtio_transport_dgram_bind" },
	{ 0xf31ec237, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x158474c4, "virtio_transport_stream_rcvhiwat" },
	{ 0xda10d022, "virtio_transport_set_max_buffer_size" },
	{ 0x5862c313, "vhost_dev_init" },
	{ 0xfbbe6ca7, "vhost_dev_stop" },
	{ 0x844de37a, "vhost_vq_access_ok" },
	{ 0x8882dfd1, "virtio_transport_stream_has_data" },
	{ 0x9649c452, "virtio_transport_connect" },
	{ 0x96b8f20c, "vsock_for_each_connected_socket" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x66eeb362, "vhost_vring_ioctl" },
	{ 0x867234, "misc_deregister" },
	{ 0x6fb8948f, "_copy_to_iter" },
	{ 0xe0aecac8, "virtio_transport_release" },
	{ 0x4c72ff8b, "virtio_transport_get_min_buffer_size" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc6b6412f, "virtio_transport_notify_recv_init" },
	{ 0x6ee59d62, "vhost_add_used" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vhost,vsock");


MODULE_INFO(srcversion, "0B67B5F398BE158A0F7C36D");
