#ifndef _PWM_H
#define _PWM_H

enum MOTOR_DIR
{
    SIDE_GO,
    SIDE_STOP,
    SIDE_BACK
};

void motor_Init (unsigned char period, enum MOTOR_DIR dir_right, enum MOTOR_DIR dir_left);
void motor_Write(unsigned char period, enum MOTOR_DIR dir_right, enum MOTOR_DIR dir_left);

#endif
