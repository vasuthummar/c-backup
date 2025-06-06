#include <stdio.h>
int main()
{
    int val,tmp,rev=0,sum=0;
    printf("Enter a value=");
    scanf("%d", &val);

    tmp=val;

    while(val>0)
    {
        sum=val%10;
        rev=(rev*10)+sum;
        val=val/10;

    }

    if(rev==tmp)
        {
            printf("It is a palindrom");
        }

        else
        {
            printf("It is not a palindrom");
        }

    return 0;
}