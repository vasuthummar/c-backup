#include <stdio.h>
int main()
{
    int i=1,os=0,es=0;
    while(i <= 20)
    {
        if(i%2==0)
            {
                es=es+i;
            }
        else
            {
                os=os+i;
            }
        i++;
    }

    printf("Sum of odd number is=%d & even number is=%d", os, es);
    return 0;
    
}