#include <stdio.h>
int main()
{
    float mill,year,day,hour,min,sec;

    printf("Enter a Millennume=");
    scanf("%f", &mill);

    year=mill*1000;
    day=year*365;
    hour=day*24;
    min=hour*60;
    sec=min*60;

    printf("Second=%f", sec);

    return 0;

}