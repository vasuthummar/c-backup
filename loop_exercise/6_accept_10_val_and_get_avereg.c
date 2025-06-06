#include <stdio.h>
int main()
{
    int i=1,val,sum=0,avg;
    while(i <= 1)
    {
        printf("Enter a value=");
        scanf("%d", &val);

        sum=sum+val;
        avg=sum/i;
        i++;
    }
    printf("Average=%d", avg);

    return 0;
}