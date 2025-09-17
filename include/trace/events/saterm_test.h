#undef TRACE_SYSTEM
#define TRACE_SYSTEM subsys
#undef TRACE_INCLUDE_FILE
#define TRACE_INCLUDE_FILE subsys

// the names are wack but we don't talk about it -ES

#if !defined(_TRACE_SUBSYS_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_SUBSYS_H

#include <linux/tracepoint.h>

#ifdef CONFIG_HAVE_SYSCALL_TRACEPOINTS
DECLARE_TRACE(sys_saterm_test,
	TP_PROTO(struct pt_regs *regs, long ret),
		TP_ARGS(regs, ret));
#endif /* CONFIG_HAVE_SYSCALL_TRACEPOINTS */

#endif /* _TRACE_SUBSYS_H */

/* This part must be outside protection */
#include <trace/define_trace.h>
