#include <stdio.h>
int main()
{
    int val,tmp=val,sum=0,i=1;
    printf("Enter a number=");
    scanf("%d", &val);

    while (i < val)
    {
        if (val%i==0)
        {
            printf("%d\n", i);
            sum=sum+i;
        }
        
        i++;

    }

    if(sum==tmp)
    {
        printf("%d is a perfect number", sum);
    }

    else
    {
        printf("%d is not a perfect number", sum);
    }

    return 0;
    
}