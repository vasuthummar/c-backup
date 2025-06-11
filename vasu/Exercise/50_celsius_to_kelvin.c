#include <stdio.h>
int main()
{
    float c,k;

    printf("Enter a Celsius=");
    scanf("%f", &c);

    k=c+273.15;

    printf("Kelvin=%f", k);

    return 0;

}