#include <stdio.h>
int main()
{
    float sec,min,hour,day,year,month;
    printf("Enter a Seconds=");
    scanf("%f", &sec);

    min=sec/60;
    hour=min/60;
    day=hour/24;
    year=day/365;
    month=year*12;

    printf("Months=%f", month);
    return 0;
}