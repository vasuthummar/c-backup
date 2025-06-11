#include <stdio.h>
int main()
{
    int val,digit=0,tmp,sum=0;
    printf("Enter a value=");
    scanf("%d", &val);

    tmp=val;

    while(val>0)
    {
        digit=val%10;
        sum=sum+(digit*digit*digit);
        val=val/10;
    }

    if(sum==tmp)
    {
        printf("%d is a armstrong", tmp);
    }

    else
    {
        printf("%d is not a armstrong", tmp);
    }

    return 0;
}