#include <stdio.h>
int main()
{
    int mill,year,day,hour;

    printf("Enter a Millennium=");
    scanf("%d", &mill);

    year=mill*1000;
    day=year*365;
    hour=day*24;

    printf("Hours=%d", hour);

    return 0;

    
}
