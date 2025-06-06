#include <stdio.h>
int main()
{
    int power,result=1,base;
    printf("Enter a power=");
    scanf("%d", &power);

    printf("Enter a base=");
    scanf("%d", &base);

    while(power >= 1)
    {
        result=result*base;
        power--;
    }

    printf("Power of accepted value is=%d", result);

    return 0;

}