#include <stdio.h>
int main()
{
    float month,year,day,hour,min,sec; 
    printf("Enter a Months=");
    scanf("%f", &month);

    year=month/12;
    day=year*365;
    hour=day*24;
    min=hour*60;
    sec=min*60;

    printf("Seconds=%f", sec);

    return 0;
}