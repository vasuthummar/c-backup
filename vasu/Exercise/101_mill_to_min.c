#include <stdio.h>
int main()
{
    float mill,year,day,hour,min;
    printf("Enter a Millennium=");
    scanf("%f", &mill);

    year=mill*1000;
    day=year*365;
    hour=day*24;
    min=hour*60;

    printf("Minutes=%f", min);

    return 0;
}