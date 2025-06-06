#include <stdio.h>
int main()
{
    float  dec,year,day,hour,min,sec;
    printf("Enter a Decands=");
    scanf("%f", &dec);

    year=dec*10;
    day=year*365;
    hour=day*24;
    min=hour*60;
    sec=min*60;

    printf("Seconds=%f", sec);
    return 0;
}