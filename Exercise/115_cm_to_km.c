#include <stdio.h>
int main()
{
    float cm,m,km;
    printf("Enter a Centimeter=");
    scanf("%f", &cm);

    m=cm/100;
    km=m/1000;

    printf("Kilometers=%f", km);

    return 0;
}