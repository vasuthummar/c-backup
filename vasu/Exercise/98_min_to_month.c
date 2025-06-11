#include <stdio.h>
int main()
{
    float min,hour,day,year,month;
    printf("Enter a Minutes=");
    scanf("%f", &min);

    hour=min/60;
    day=hour/24;
    year=day/365;
    month=year*12;

    printf("Months=%f", month);
    return 0;
}