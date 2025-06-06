#include <stdio.h>
int main()
{
    float k,c;
    printf("Enter a Kelvin=");
    scanf("%f", &k);

    c=k-273.15;

    printf("Celsius=%f", c);
    return 0;
}