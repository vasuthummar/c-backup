#include <stdio.h>
int main()
{
    float cm,m;
    printf("Enter a Centimeter=");
    scanf("%f", &cm);

    m=cm/100;

    printf("Meters=%f", m);

    return 0;
}