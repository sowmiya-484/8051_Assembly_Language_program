#include <reg51.h>
#define LCD P2
sbit RS = P3^0;
sbit RW = P3^1;
sbit EN = P3^2;
sbit SW = P1^0;
void delay(unsigned int t)
{
    unsigned int i, j;
    for(i = 0; i < t; i++)
    {
        for(j = 0; j < 1275; j++);
    }
}
void LCD_CMD(unsigned char cmd)
{
    LCD = cmd;
    RS = 0;
    RW = 0;
    EN = 1;
    delay(1);
    EN = 0;
}
void LCD_DATA(unsigned char ch)
{
    LCD = ch;
    RS = 1;
    RW = 0;
    EN = 1;
    delay(1);
    EN = 0;
}
void LCD_INIT(void)
{
    LCD_CMD(0x38);
    LCD_CMD(0x06);
    LCD_CMD(0x0C);
    LCD_CMD(0x01);
    delay(2);
}
void LCD_STRING(unsigned char *str)
{
    while(*str)
    {
        LCD_DATA(*str);
        str++;
    }
}
void main(void)
{
    LCD_INIT();
    while(1)
    {
        LCD_CMD(0x01);
        if(SW == 0)
        {
            LCD_STRING("Pressed");
        }
        else
        {
            LCD_STRING("Not Pressed");
        }
        delay(10);
    }
}
