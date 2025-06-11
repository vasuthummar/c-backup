#include <stdio.h>
int main()
{
    int cen,year,month;

    printf("Enter a Centuris=");
    scanf("%d", &cen);

    year=cen*1000;
    month=year*12;

    printf("Month=%d", month);

    return 0;
}