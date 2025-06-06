#include <stdio.h>

void printStrong(int);

int main()
{
    int val;
    printStrong(val);

    return 0;
}

void printStrong(int val)
{
    int fact=1,digit=0,sum=0,tmp,strong=1;
    
    for(strong=1; strong<=100; strong++)
    {
        val=strong;
        tmp=val;
        digit=0;
        sum=0;
        fact=1;
        while(val>0)
        {
            digit=val%10;

            while(digit >= 1)
            {
                fact=fact*digit;
                digit--;
            }
            sum=sum+fact;
            fact=1;
            val=val/10;
        }
        if(sum==tmp)
        {
            printf("%d\n", tmp);
        }
    }
} 