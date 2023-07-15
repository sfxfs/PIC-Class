#ifndef _SENSOR_H
#define _SENSOR_H

void sensor_Init(void);
void sensor_Interrupt(void);
unsigned char sensor_GetValue(void);

#endif
