#ifndef __XBOOT_H__
#define __XBOOT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <xconfigs.h>
#include <endian.h>
#include <barrier.h>
#include <atomic.h>
#include <irqflags.h>
#include <spinlock.h>
#include <types.h>
#include <sizes.h>
#include <limits.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <ctype.h>
#include <errno.h>
#include <environ.h>
#include <byteorder.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <locale.h>
#include <path.h>
#include <log2.h>
#include <time.h>
#include <math.h>
#include <exit.h>
#include <io.h>
#include <bcd.h>
#include <list.h>
#include <fifo.h>
#include <queue.h>
#include <ssize.h>
#include <malloc.h>
#include <charset.h>
#include <version.h>
#include <runtime.h>
#include <xboot/kref.h>
#include <xboot/kobj.h>
#include <xboot/ktime.h>
#include <xboot/seqlock.h>
#include <xboot/event.h>
#include <xboot/profiler.h>
#include <xboot/notifier.h>
#include <xboot/initcall.h>
#include <xboot/module.h>
#include <xboot/machine.h>
#include <xboot/dtree.h>
#include <xboot/device.h>
#include <xboot/driver.h>
#include <time/delay.h>
#include <time/timer.h>
#include <clockevent/clockevent.h>
#include <clocksource/clocksource.h>
#include <fs/fileio.h>

#ifdef __cplusplus
}
#endif

#endif /* __XBOOT_H__ */
