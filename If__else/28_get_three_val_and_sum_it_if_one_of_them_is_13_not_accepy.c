#include <stdio.h>
int main()
{
    int val1,val2,val3,sum;
    printf("Enter a first value=");
    scanf("%d", &val1);

    printf("Enter a second value=");
    scanf("%d", &val2);

    printf("Enter a thired value=");
    scanf("%d", &val3);

    if(val1 == 13)
        printf("%d", val2+val3);

    else
    {
        if(val2 == 13)
            printf("%d", val1+val3);

        else if(val3 == 13)
            printf("%d", val1+val2);

        else
            printf("%d", val1+val2+val3);
    }
        return 0;
}