#include <stdio.h>
int main()
{
    int i=1,val,sum=0;
    while(i <= 10)
    {
        printf("Enter a value=");
        scanf("%d", &val);

        sum=sum+val;
        i++;
    }

    printf("Sum of 10 value is=%d", sum);
    return 0;
}