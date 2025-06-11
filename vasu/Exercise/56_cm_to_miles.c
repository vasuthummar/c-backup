#include <stdio.h>
int main()
{
    float cm,m,km,mile;
    printf("Enter a Centimeters=");
    scanf("%f", &cm);

    m=cm/100;
    km=m/1000;
    mile=km/1.6;

    printf("Miles=%f", mile);
    return 0;
}