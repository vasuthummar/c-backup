#include <stdio.h>
int main()
{
    float sec,min,hour,day,year;
    printf("Enter a Seconds=");
    scanf("%f", &sec);

    min=sec/60;
    hour=min/60;
    day=hour/24;
    year=day/365;

    printf("Years=%f", year);
    return 0;
}