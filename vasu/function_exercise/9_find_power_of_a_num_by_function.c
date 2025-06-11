#include <stdio.h>

void getPower(int);

int main()
{
    int val;
    getPower(val);

    return 0;
}

void getPower(int val)
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

    printf("=%d", result);
}