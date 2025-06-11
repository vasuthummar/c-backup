#include <stdio.h>
int main()
{
    int digit,sum=0,tmp,i=1;
    
    while(i<=1000)
    {         
        tmp=i;
        sum=0;
        while(tmp>0)
        {
            digit=tmp%10;
            sum=sum+(digit*digit*digit);
            tmp=tmp/10;
        }

        if(sum==i)
        {
            printf("%d\n", sum);
        }
            
        i++;
    }
        
    return 0;
}