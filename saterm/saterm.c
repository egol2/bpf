#include <linux/kernel.h>
#include <linux/bpf.h>
#include <linux/filter.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(saterm_test){
	return 0;
}
