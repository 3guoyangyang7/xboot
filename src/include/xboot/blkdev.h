#ifndef __BLKDEV_H__
#define __BLKDEV_H__

#include <configs.h>
#include <default.h>
#include <types.h>
#include <string.h>
#include <xboot/list.h>

/*
 * block device type
 */
enum blkdev_type {
	BLK_DEV_MTD,
	BLK_DEV_MMC,
};

/*
 * the struct of blkdev.
 */
struct blkdev
{
	/* the device name */
	const char * name;

	/* the type of block device */
	const enum blkdev_type type;

	/* open device */
	x_s32 (*open)(struct blkdev * dev);

	/* close device */
	x_s32 (*close)(struct blkdev * dev);

	/* block device's driver */
	void * driver;
};


struct blkdev * search_blkdev(const char * name);
struct blkdev * search_blkdev_with_type(const char * name, enum blkdev_type type);
x_bool register_blkdev(struct blkdev * dev);
x_bool unregister_blkdev(const char * name);

#endif /* __BLKDEV_H__ */
