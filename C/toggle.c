#include <reg51.h>
sbit LED = P1^0;
sbit SW  = P3^0;
void delay()
{
    int i, j;
    for(i = 0; i < 100; i++)
    {
        for(j = 0; j < 1275; j++)
        {
        }
    }
}
void main()
{
    LED = 0;   
    SW = 1;     
    while(1)
    {
        if(SW == 0)       
        {
            delay();     
            if(SW == 0) 
            {
                LED = !LED;  
                while(SW == 0)
                {
                   
                }
            }
        }
    }
}
