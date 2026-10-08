#include <reg51.h>
sbit LED = P1^0;
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
        LED = 1;     
        delay();
        LED = 0;    
        delay();
    }
}
