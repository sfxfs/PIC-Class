#include <htc.h>
#include <stdio.h>
#include <string.h>
__CONFIG(HS &WDTDIS &LVPDIS);

#include "lcd1602.h"
#include "hcsr04.h"
#include "motor.h"
#include "sensor.h"
#include "usart.h"

#define S_TURN 140
#define L_TURN 170
#define GO_INIT 210
unsigned char go_motor_value = GO_INIT;

#define START_POINT_DELAY 10000
#define ROUND_TURN_DELAY 20000
#define FOR_DELAY_5S 220000

#define S_ROUND round_count == 1 || round_count == 3
#define L_ROUND round_count == 2

enum ERROR_TYPE
{
    LEFT_LARGE_TURN,
    LEFT_LITE_TURN,
    GO_LINE,
    RIGHT_LARGE_TURN,
    RIGHT_LITE_TURN
};

enum USART_DATA_TYPE
{
    CAR_CHANGE_STA = 1,
    CAR_SPEED_UP,
    CAR_SPEED_MID,
    CAR_SPEED_DOWN
};

unsigned char round_count = 0;
volatile char start_flag = 0;
volatile char too_close_flag = 0;
char error, prev_error = GO_LINE; // 右转为正，左转为�?

char error_str[16] = {0};
char usart_str[16] = {0};
unsigned char usart_data = 0;
int hcsr_value = 0;
int hcsr_count = 0;
// enum MOTOR_DIR left_temp = SIDE_STOP;
// enum MOTOR_DIR right_temp = SIDE_STOP;

void interrupt fxf(void)
{
    sensor_Interrupt();
    usart_Interrupt();
}

main(void)
{
    LCD_Init();
    motor_Init(0, SIDE_STOP, SIDE_STOP);
    sensor_Init();
    usart_Init();
    hcsr04_Init();

    for (;;)
    {
        if (start_flag && !too_close_flag)
        {

            if (round_count == 4)
            {
                motor_Write(0, SIDE_STOP, SIDE_STOP);
                start_flag = 0;
                round_count = 0;
            }

            switch (sensor_GetValue()) // 黑色高电�?
            {
            case 0b00000000:
                round_count++;
                for (size_t i = 0; i < START_POINT_DELAY; i++)
                {
                    asm("nop");
                }
                
                if (round_count == 2)
                {
                    TXREG = CAR_SPEED_DOWN;
                }
                
                error = GO_LINE;
                break;

            case 0b11110000:
                if (prev_error == LEFT_LARGE_TURN || prev_error == RIGHT_LARGE_TURN) // prev_error = 0b0xxx
                {
                    error = prev_error;
                }
                else
                {
                    error = GO_LINE;
                }
                break;

            case 0b10010000:
                error = GO_LINE;
                break;

            case 0b10110000:
                error = LEFT_LITE_TURN;
                break;

            case 0b01110000:
                error = LEFT_LARGE_TURN;
                break;

            case 0b11010000:
                error = RIGHT_LITE_TURN;
                break;

            case 0b11100000:
                error = RIGHT_LARGE_TURN;
                break;
                //=================round case=======================
            case 0b00110000:
                if (S_ROUND)
                {
                    motor_Write(go_motor_value, SIDE_GO, SIDE_BACK);
                    for (size_t i = 0; i < ROUND_TURN_DELAY; i++)
                    {
                        asm("nop");
                    }
                }
                if (L_ROUND)
                {
                    motor_Write(go_motor_value, SIDE_GO, SIDE_GO);
                    for (size_t i = 0; i < ROUND_TURN_DELAY; i++)
                    {
                        asm("nop");
                    }
                }
                break;

            case 0b00010000:
                if (S_ROUND)
                {
                    motor_Write(go_motor_value, SIDE_GO, SIDE_BACK);
                    for (size_t i = 0; i < ROUND_TURN_DELAY; i++)
                    {
                        asm("nop");
                    }
                }
                if (L_ROUND)
                {
                    motor_Write(go_motor_value, SIDE_GO, SIDE_GO);
                    for (size_t i = 0; i < ROUND_TURN_DELAY; i++)
                    {
                        asm("nop");
                    }
                }
                break;

            default:
                error = prev_error;
                break;
            }

            switch (error)
            {
            case LEFT_LARGE_TURN:
                motor_Write(L_TURN, SIDE_GO, SIDE_BACK);
                break;

            case LEFT_LITE_TURN:
                motor_Write(S_TURN, SIDE_GO, SIDE_STOP);
                break;

            case GO_LINE:
                motor_Write(go_motor_value, SIDE_GO, SIDE_GO);
                break;

            case RIGHT_LARGE_TURN:
                motor_Write(L_TURN, SIDE_BACK, SIDE_GO);
                break;

            case RIGHT_LITE_TURN:
                motor_Write(S_TURN, SIDE_STOP, SIDE_GO);
                break;

            default:
                break;
            }
        }
        else
        {
            motor_Write(0, SIDE_STOP, SIDE_STOP);
        }


        usart_data = usart_GetData();
        if (usart_data == CAR_CHANGE_STA)
        {
            start_flag = !start_flag;
        }else if (usart_data == CAR_SPEED_DOWN)
        {
            go_motor_value = GO_INIT - 50;
        }else if (usart_data == CAR_SPEED_MID)
        {
            go_motor_value = GO_INIT;
        }else if (usart_data == CAR_SPEED_UP)
        {
            go_motor_value = GO_INIT + 30;
        }
        


        if (hcsr_count == 50)
        {
            hcsr_value = hcsr04_GetDis();
            if (hcsr_value <= 15)
            {
                too_close_flag = 1;
            }
            else
            {
                too_close_flag = 0;
            }
            sprintf(error_str, "hcsr:%d ", hcsr_value);

            hcsr_count = 0;
        }

        sprintf(usart_str, "round:%d", round_count);

        LCD_ShowStr(usart_str, 0, 1);
        LCD_ShowStr(error_str, 0, 0);

        prev_error = error;
        hcsr_count++;
    }
}
