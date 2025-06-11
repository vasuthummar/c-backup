#include <stdio.h>
int main()
{
    int val;

    printf("Enter a Number=");
    scanf("%d", &val);

    if(val>10)
    printf("value is bigger 10");

    else if(val<10)
    printf("Value is less than 10");

    else

    printf("Value is equal  10");

    return 0;
}