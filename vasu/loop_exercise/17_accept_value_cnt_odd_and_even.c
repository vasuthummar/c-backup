#include <stdio.h>
int main()
{
    int i=1,odd=0,even=0,val;
    while(i <= 10)
    {
        printf("Enter a value=");
        scanf("%d", &val);

        if(val%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        i++;
    }

    printf("Total number of odd value is=%d and even value is=%d", odd, even);
    return 0;
}