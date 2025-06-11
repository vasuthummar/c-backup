#include <stdio.h>
int main()
{
    float hour,day,year,cen;
    printf("Enter a Hours=");
    scanf("%f", &hour);

    day=hour/24;
    year=day/365;
    cen=year/100;


    printf("Centuris=%f", cen);

    return 0;
}