#include <stdio.h>
int main()
{
    float hour,day,year,dec;
    printf("Enter a Hours=");
    scanf("%f", &hour);

    day=hour/24;
    year=day/365;
    dec=year/10;

    printf("Decands=%f", dec);

    return 0;
}