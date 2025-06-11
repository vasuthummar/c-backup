#include <stdio.h>
int main()
{
    float sec,min,hour,day,year,cen;
    printf("Enter a Seconds=");
    scanf("%f", &sec);

    min=sec/60;
    hour=min/60;
    day=hour/24;
    year=day/365;
    cen=year/100;

    printf("Centuries=%f", cen);
    return 0;
}