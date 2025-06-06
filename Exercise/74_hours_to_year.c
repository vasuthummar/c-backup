#include <stdio.h>
int main()
{
    float hour,day,year;
    printf("Enter a Hours=");
    scanf("%f", &hour);

    day=hour/24;
    year=day/365;

    printf("Years=%f", year);
    return 0;
}