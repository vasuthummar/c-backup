#include <stdio.h>
int main()
{
    int val1,val2,sum;
    printf("Enter a first value=");
    scanf("%d", &val1);

    printf("Enter a second value=");
    scanf("%d",&val2);

    sum=val1+val2;

    if(sum >= 10 && sum <= 20)
        printf("%d is rang in 10 to 20", sum);

    else
        printf("%d is not rang in 10 to 20", sum);

        return 0;
}