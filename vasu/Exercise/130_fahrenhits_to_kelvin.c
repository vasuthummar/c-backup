#include <stdio.h>
int main()
{
    float f,k;
    printf("Enter a Fahrenheit=");
    scanf("%f", &f);

    k=(f-32)*1.8+273.15;

    printf("Kelvin=%f", k);

    return 0;
}