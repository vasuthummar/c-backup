#include <stdio.h>
int main()
{
    int val,fact=1,digit=0,sum=0,tmp;
    printf("Enter a value=");
    scanf("%d",&val);

    tmp=val;

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
        printf("%d is a strong number", tmp);
    }

    else
    {
        printf("%d is not a strong number", tmp);
    }

    return 0;
}