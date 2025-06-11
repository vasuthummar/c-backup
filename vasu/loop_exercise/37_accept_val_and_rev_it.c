#include <stdio.h>
int main()
{
    int val,sum=0,rev=0;
    printf("Enter a value=");
    scanf("%d", &val);

    while (val > 0)
    {
        sum=val % 10;
        rev=(rev*10)+sum;
        val=val/10;
    }

    printf("Revers=%d", rev);

    return 0;
    
}