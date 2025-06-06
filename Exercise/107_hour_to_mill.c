#include <stdio.h>
int main()
{
    float hour,day,year,mill;
    printf("Enter a Hours=");
    scanf("%f", &hour);

    day=hour/24;
    year=day/365;
    mill=year/1.6;

    printf("Millennume=%f", mill);

    return 0;
}