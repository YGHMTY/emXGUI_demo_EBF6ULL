#ifndef __PCF8563_H__
#define __PCF8563_H__

#ifdef __CPLUSPLUS
extern "C" {
#endif

/*=================================================================================*/
////regs

/*=================================================================================*/

extern int PCF8563_IsOK;

/*=================================================================================*/

void PCF8563_Init(const struct i2c_ops *iic);
BOOL PCF8563_GetDate(u8 *year,u8 *mon,u8 *day);
BOOL PCF8563_GetTime(u8 *hour,u8 *min,u8 *sec);
BOOL PCF8563_SetDate(u8 year,u8 mon,u8 day);
BOOL PCF8563_SetTime(u8 hour,u8 min,u8 sec);

/*=================================================================================*/

/*=================================================================================*/

#ifdef __CPLUSPLUS
}
#endif

#endif /* __PCF8563_H__ */