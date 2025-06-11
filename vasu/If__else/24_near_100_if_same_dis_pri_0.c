#include <stdio.h>
int main()
{
    int val1,val2,ax,bx;
    printf("Enter a first val=");
    scanf("%d", &val1);

    printf("Enter a second val=");
    scanf("%d", &val2);

    if(val1==val2)
        printf("Both number at same distence");
    else
    {
        if(val1 > 100)
            ax=val1-100;
        else 
            ax=100-val1;

        if(val2 > 100)
            bx=val2-100;
        else
            bx=100-bx;

        if(ax < bx)
            printf("%d Value is near to 100", val1);

        else if(bx < ax)
            printf("%d Value is near to 100", val2);

        else
            printf("Both number at same distence");
    }

    return 0;
}