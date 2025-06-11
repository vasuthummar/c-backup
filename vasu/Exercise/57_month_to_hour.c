#include <stdio.h>
int main()
{
    float month,year,day,hour;
    printf("Enter a Months=");
    scanf("%f", &month);

    year=month/12;
    day=year*365;
    hour=day*24;


    printf("Hours=%f", hour);
    return 0;
}