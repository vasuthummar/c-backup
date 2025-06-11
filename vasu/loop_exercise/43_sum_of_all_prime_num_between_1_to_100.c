#include <stdio.h>
int main()
{
    int val=0,i=2,prime=2,sum=0;
   

    for(prime=2; prime<=100; prime++)
    {
        val=prime;
        i=2;

        while(i < val)
        {
            if(val%i==0)
                break;

            i++; 
        }

        if(i==val)
        {
            sum=sum+i;
            
        }
    }   

    printf("%d", sum);

    return 0;
}   