#include <stdio.h>
int main()
{
    float min,hour,day,year;
    printf("Enter a Minutes=");
    scanf("%f", &min);

    hour=min/60;
    day=hour/24;
    year=day/365;

    printf("Years=%f", year);
    return 0;
}