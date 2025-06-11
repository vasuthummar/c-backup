#include <stdio.h>
int main()
{
    float m,km;
    printf("Enter a Meters=");
    scanf("%f", &m);

    km=m/1000;

    printf("Kilometers=%f", km);
    return 0;
}