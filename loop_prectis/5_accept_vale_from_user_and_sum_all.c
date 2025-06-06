#include <stdio.h>
int main()
{
    int i=1,val,sum=0;
    while(i <= 5)
    {
        printf("Enter a value=");
        scanf("%d", &val);

        sum=sum+val;
        i++;
    }
    printf("Sum of all number is=%d", sum);
    return 0;
}