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
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x7410aba2, "strreplace" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x9c6098c5, "crypto_alloc_shash" },
	{ 0x6a460dc5, "schedule_hrtimeout" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xa8c1da91, "bmap" },
	{ 0xbfd67a51, "seq_open" },
	{ 0xd36e49dc, "end_buffer_write_sync" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xe627f577, "blkdev_issue_flush" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x463e745, "ll_rw_block" },
	{ 0xb64326e, "__lock_buffer" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xca431c05, "wake_bit_function" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc835b3fd, "trace_event_buffer_reserve" },
	{ 0x4a76a59a, "__getblk_gfp" },
	{ 0xe96dfdde, "unlock_buffer" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xae254cfe, "seq_read" },
	{ 0xb48f44d8, "bpf_trace_run3" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8998a51e, "set_bh_page" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd44f7a9f, "PDE_DATA" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x99b17d7a, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x6d623b61, "proc_mkdir" },
	{ 0x6bd55222, "bpf_trace_run1" },
	{ 0x712e52f7, "current_task" },
	{ 0xc1b1b6c5, "freezing_slow_path" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xbc704ff, "crypto_shash_update" },
	{ 0x6ba67fa5, "generic_writepages" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x160513d6, "filemap_fdatawait_range_keep_errors" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x4819d039, "trace_event_reg" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x63c33c8, "__wait_on_buffer" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0xd677060b, "bpf_trace_run5" },
	{ 0x24d273d1, "add_timer" },
	{ 0x6a287754, "unlock_page" },
	{ 0xa985eae7, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x528bce9c, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0xad9901ae, "bit_waitqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x561f58f8, "free_buffer_head" },
	{ 0x9b77eeb7, "bdevname" },
	{ 0x5066b9e, "sync_blockdev" },
	{ 0x2a1473d0, "try_to_free_buffers" },
	{ 0x59478097, "trace_event_ignore_this_pid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x91c8b5b5, "mutex_lock_io" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x291bec8a, "trace_event_buffer_commit" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0x642b02dd, "alloc_buffer_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd02ff3d0, "submit_bh" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x931494de, "bpf_trace_run8" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x226a6bd8, "event_triggers_call" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4e01, "bpf_trace_run2" },
	{ 0x5e87617f, "proc_create_data" },
	{ 0xd06d2327, "blockdev_superblock" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x8a5e72aa, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3092b99f, "trace_event_raw_init" },
	{ 0x4df02057, "crc32_be" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x7cc2bced, "write_dirty_buffer" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb0844894, "__bforget" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6ea298d1, "filemap_fdatawrite_range" },
	{ 0xd32f9dea, "__find_get_block" },
	{ 0x749cbe67, "mark_buffer_dirty" },
	{ 0xe24133ec, "bpf_trace_run6" },
	{ 0xd56c8357, "trace_raw_output_prep" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x30ad1974, "seq_release" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0xb1b5ece7, "bpf_trace_run4" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xe48af658, "__put_page" },
	{ 0x484f6edf, "ktime_get_coarse_real_ts64" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D4905A60A68B2DACFE9C5E6");
