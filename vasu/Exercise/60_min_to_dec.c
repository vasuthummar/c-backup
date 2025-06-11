#include <stdio.h>
int main()
{
    float min,hour,day,year,dec;
    printf("Enter a Minutes=");
    scanf("%f", &min);

    hour=min/60;
    day=hour/24;
    year=day/365;
    dec=year/10;

    printf("Decands=%f", dec);
    return 0;
}