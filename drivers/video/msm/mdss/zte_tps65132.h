/*
* pn544.h
* Copyright (C) 2011	NXP Semiconductors
*/

//ALERT:please relocate pn544.h under .\kernel\include\linux

#define TPS65132_DRIVER_NAME	"tps65132"

#define HCI_MODE	0
#define FW_MODE		1

#define TPS65132_MAGIC	0xE9

/*
 * PN544 power control via ioctl
 * PN544_SET_PWR(0): power off
 * PN544_SET_PWR(1): power on
 * PN544_SET_PWR(2): reset and power on with firmware download enabled
 */
#define TPS65132_SET_PWR	_IOW(TPS65132_MAGIC, 0x01, unsigned int)

#ifdef __KERNEL__
/* board config */
struct tps65132_nfc_platform_data {
	int (*request_resources) (struct i2c_client *client);
	void (*free_resources) (void);
	void (*enable) (int fw);
	int (*test) (void);
	void (*disable) (void);
	int (*irq_status) (void);
};
#endif /* __KERNEL__ */

