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
    P1 = 0x00;
    while(1)
    {
        P1 = 0x55;  
        delay();
        P1 = 0xAA;     
        delay();
    }
}