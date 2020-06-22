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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x838b13e7, "ring_buffer_free" },
	{ 0x51dde20f, "set_user_nice" },
	{ 0x8df2c488, "sched_setscheduler" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0xf4fc2d6c, "__ring_buffer_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff3ad0, "ring_buffer_free_read_page" },
	{ 0x6a6cafd2, "ring_buffer_read_page" },
	{ 0x4aadeb9a, "ring_buffer_alloc_read_page" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xfc70c5d8, "ring_buffer_consume" },
	{ 0x29361773, "complete" },
	{ 0x1a551022, "ring_buffer_lock_reserve" },
	{ 0xa83f641e, "ring_buffer_unlock_commit" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9d09e8ae, "ring_buffer_event_data" },
	{ 0xddd58dc0, "ring_buffer_reset" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa20d01ba, "__trace_bprintk" },
	{ 0xd9ecb670, "ring_buffer_overruns" },
	{ 0x4e109192, "ring_buffer_entries" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb1e25684, "__trace_bputs" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x1000e51, "schedule" },
	{ 0x712e52f7, "current_task" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B4EAB7A05CDC914B774F60F");
