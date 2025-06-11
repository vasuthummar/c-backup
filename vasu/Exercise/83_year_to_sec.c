#include <stdio.h>
int main()
{
    float year,day,hour,min,sec;
    printf("Enter a Years=");
    scanf("%f", &year);

    day=year*365;
    hour=day*24;
    min=hour*60;
    sec=min*60;

    printf("Seconds=%f", sec);
    return 0;
}