#include <htc.h>

#include "motor.h"

#define IN1 RB0
#define IN2 RB1
#define IN3 RB2
#define IN4 RB3

#define FREQ 255
#define PWM_TRIS TRISC1

void motor_dir (enum MOTOR_DIR dir, unsigned char is_left_side)
{
    if (is_left_side)
    {
        switch (dir)
        {
        case SIDE_GO:
            IN3 = 1;
            IN4 = 0;
            break;

        case SIDE_STOP:
            IN3 = 0;
            IN4 = 0;
            break;

        case SIDE_BACK:
            IN3 = 0;
            IN4 = 1;
            break;
        
        default:
            break;
        }
    }else
    {
        switch (dir)
        {
        case SIDE_GO:
            IN1 = 1;
            IN2 = 0;
            break;

        case SIDE_STOP:
            IN1 = 0;
            IN2 = 0;
            break;

        case SIDE_BACK:
            IN1 = 0;
            IN2 = 1;
            break;
        
        default:
            break;
        }
    }
}

void motor_Init (unsigned char period, enum MOTOR_DIR dir_right, enum MOTOR_DIR dir_left)
{
    TRISB &= 0b11110000;

    PWM_TRIS = 0;

    CCP2CON = 0x3C;
    T2CON = 0;

    CCPR2L = period;
    PR2 = FREQ;

    TMR2 = 0;
    TMR2ON = 1;

    motor_dir(dir_right, 0);
    motor_dir(dir_left, 1);
}

void motor_Write(unsigned char period, enum MOTOR_DIR dir_right, enum MOTOR_DIR dir_left)
{
    CCPR2L = period;

    motor_dir(dir_right, 0);
    motor_dir(dir_left, 1);
}
