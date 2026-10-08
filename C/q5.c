#include <reg51.h>
sbit LED = P1^0;
sbit SW  = P3^0;
void main()
{
    P1 = 0x00;   
    SW = 1;         

    while(1)
    {
        if(SW == 0)   
        {
            LED = 1;   
        }
        else        
        {
            LED = 0; 
        }
    }
}