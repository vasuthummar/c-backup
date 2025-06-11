#include <stdio.h>
int main()
{
    int val,i=1,sum=0;
    printf("Enter a value=");
    scanf("%d", &val);
    while(i <= val)
    {
        if(val%i==0)
        {
            printf("%d\n", i);
            sum=sum+i;
        }
        
        i++;
    }

    printf("Sum of all factor=%d", sum);

    return 0;

}