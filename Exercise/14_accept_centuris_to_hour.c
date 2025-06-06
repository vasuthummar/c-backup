#include <stdio.h>
int main()
{
    int cen,year,day,hour;

    printf("Enter a numbre of centuris=");
    scanf("%d", &cen);

    year=cen*100;
    day=year*365;
    hour=day*24;

    printf("Hours=%d", hour);

    return 0;
}