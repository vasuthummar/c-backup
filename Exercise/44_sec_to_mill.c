#include <stdio.h>
int main()
{
    float sec,min,hour,day,year,mill;

    printf("Enter a Second=");
    scanf("%f", &sec);

    min=sec/60;
    hour=min/60;
    day=hour/24;
    year=day/365;
    mill=year/1000;

    printf("Millenium=%f", mill);

    return 0;

}