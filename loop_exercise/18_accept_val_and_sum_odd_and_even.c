#include <stdio.h>
int main()
{
    int i=1,os=0,es=0,val;
    while(i <= 10)
    {
        printf("Enter a value=");
        scanf("%d", &val);

        if(val%2==0)
        {
            es=es+val;
        }

        else
        {
            os=os+val;
        }

        i++;
    }

    printf("Sum of odd number is=%d\n",os);
    printf("Sum of even number is=%d",es);

    return 0;
}