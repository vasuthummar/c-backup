#include <stdio.h>
int main()
{
    float hour,day,year,month;
    printf("Enter a Hours=");
    scanf("%f", &hour);

    day=hour/24;
    year=day/365;
    month=year*12;

    printf("Months=%f", month);

    return 0;
}