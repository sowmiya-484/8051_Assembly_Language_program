#include <reg51.h>
void delay(void)
{
    unsigned int i, j;
    for(i = 0; i < 500; i++)
    {
        for(j = 0; j < 1000; j++)
        {
        }
    }
}
void main(void)
{
    unsigned char i;
    while(1)
    {
        for(i = 7; i > 0; i--)
        {
            P1 = (1 << i);
            delay();
        }
				P1 = 0x01;
        delay();
    }
}