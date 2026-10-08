#include <reg51.h>
sbit SW = P1^0;
void delay(unsigned int t)
{
    unsigned int i, j;
    for(i = 0; i < t; i++)
    {
        for(j = 0; j < 1275; j++);
    }
}
void main(void)
{
    unsigned char count = 0;
    P2 = 0x00;
    while(1)
    {
        if(SW == 0)
        {
            delay(2);
            if(SW == 0)
            {
                count++;
                P2 = count;
                while(SW == 0);
            }
        }
    }
}