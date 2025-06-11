#include <stdio.h>
int main()
{
    float dec,year,day,hour;
    printf("Enter a Decands=");
    scanf("%f", &dec);

    year=dec*10;
    day=year*365;
    hour=day*24;

    printf("Hours=%f", hour);
    return 0;
}