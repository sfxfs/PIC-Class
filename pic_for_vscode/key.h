#ifndef _KEY_H
#define _KEY_H

enum key_status
{
    KEY_TRG = 0,
    KEY_NONE = 1
};

void key_Init(void);
unsigned char key_get_value(unsigned char keyx);
void key_interrupt(void);

#endif
