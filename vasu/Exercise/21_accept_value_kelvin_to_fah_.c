#include <stdio.h>
int main()
{
    int kelvin,far;

    printf("Enter a Kelvin=");
    scanf("%d", &kelvin);

    far=(kelvin-273.15)*9/5+32;

    printf("Fahrenheit=%d", far);

    return 0;
}