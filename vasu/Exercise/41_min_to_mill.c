#include <stdio.h>
int main()
{
    float min,hour,day,year,mill;
    printf("Enter a Minutes=");
    scanf("%f", &min);

    hour=min/60;
    day=hour/24;
    year=day/365;
    mill=year/1000;

    printf("Millennume=%f", mill);

    return 0;
}