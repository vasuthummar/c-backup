#include <stdio.h>
int main()
{
    int cen,year,dec;

    printf("Enter  a number of centuris=");
    scanf("%d", &cen);

    year=cen*100;
    dec=year/10;

    printf("decades=%d", dec);

    return 0;
}