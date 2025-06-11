#include <stdio.h>
int main()
{
    int val,sum=0,digit;
    printf("Enter a value=");
    scanf("%d", &val);

    while(val > 0)
    {
        digit=val%10;
        sum=sum+digit;
        val=val/10;
    }

    printf("Sum of all digit=%d", sum);

    return 0;

}