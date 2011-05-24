/*
 * libc/stdio/fseek.c
 */

#include <xboot.h>
#include <types.h>
#include <stdarg.h>
#include <errno.h>
#include <malloc.h>
#include <fs/fileio.h>
#include <stdio.h>

int fseek(FILE * fp, loff_t offset, int whence)
{
	if(!fp)
		return -1;

	if(lseek(fp->fd, offset, whence) < 0)
		return -1;

	return 0;
}