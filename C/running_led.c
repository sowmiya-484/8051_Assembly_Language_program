#include <reg51.h>
void delay()
{
    int i, j;
    for(i = 0; i < 500; i++)
    {
        for(j = 0; j < 1275; j++)
        {
        }
    }
}
void main()
{
    unsigned char i;
    P1 = 0x00;
    while(1)
    {
        for(i = 0; i < 8; i++)
        {
            P1 = (1 << i);
            delay();
        }
    }
}
