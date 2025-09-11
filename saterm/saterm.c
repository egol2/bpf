/* SPDX-License-Identifier: GPL-2.0
 *
 * SATerm test syscall - initial placeholder implementation.
 *
 * This adds a new syscall:
 *   long sys_saterm_test(void);
 *
 * Current behavior:
 *   - Returns 0 unconditionally.
 *
 *
 * Extension points:
 *   - Replace the constant return value with real SATerm control/dispatch.
 *   - Add argument(s) via converting to SYSCALL_DEFINE1/2(...) and updating
 *     the prototype in include/linux/syscalls.h.
 *   - Wire into BPF helpers or feature-specific core once semantics settle.
 */

#include <linux/kernel.h>
#include <linux/syscalls.h>


SYSCALL_DEFINE0(saterm_test)
{
	return 0;
}
