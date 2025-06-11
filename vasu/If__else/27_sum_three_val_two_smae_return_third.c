#include <stdio.h>
int main()
{
    int val1,val2,val3,sum;
    printf("Enter a first value=");
    scanf("%d", &val1);

    printf("Enter a second value=");
    scanf("%d", &val2);

    printf("Enter a thierd value=");
    scanf("%d", &val3);

    sum=val1+val2+val3;

    if(val1 == val2)
        printf("%d", val3);
    else
    {
        if(val1 == val3)
            printf("%d", val2);

        else if(val2 == val3)
            printf("%d", val1);

        else
            printf("%d", sum);
    }
    return 0;
}