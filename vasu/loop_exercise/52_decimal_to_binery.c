#include <stdio.h>
int main()
{
    int val,multi=1,binery=0,rem=0;
    printf("Enter a value=");
    scanf("%d", &val);

    while(val > 0)
    {
        rem=val%2;
        binery=binery+(rem*multi);
        val=val/2;
        multi=multi*10;
    }

    printf("%d", binery);

    return 0;
}